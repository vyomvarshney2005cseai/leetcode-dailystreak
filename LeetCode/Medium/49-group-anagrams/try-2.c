/*
 * Problem #49: Group Anagrams
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 6/16/2026, 12:35:00 PM
 * Link: https://leetcode.com/problems/group-anagrams/
 */


#include <stdlib.h>
#include <string.h>

#define MAX_STRINGS 10001
#define HASH_SIZE 20011
#define ALPHABET_SIZE 26
#define HASH_MULT 31
#define MAX_GROUP_SIZE 101

typedef struct {
    int first_idx;
    int count;
    bool used;
    unsigned char key[ALPHABET_SIZE];
} HashEntry;

static HashEntry hash_table[HASH_SIZE];
static int next_indices[MAX_STRINGS];
static char** result_groups[MAX_STRINGS];
static int result_sizes[MAX_STRINGS];

static unsigned int hash_counts(const unsigned char* counts) {
    unsigned int hash = 0;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        hash = (hash * HASH_MULT) + counts[i];
    }
    return hash % HASH_SIZE;
}

static bool counts_equal(const unsigned char* a, const unsigned char* b) {
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

static int find_or_create_bucket(const unsigned char* char_counts) {
    unsigned int hash = hash_counts(char_counts);
    while (hash_table[hash].used) {
        if (counts_equal(hash_table[hash].key, char_counts)) {
            return (int)hash;
        }
        hash = (hash + 1) % HASH_SIZE;
    }
    hash_table[hash].used = true;
    // NOLINTNEXTLINE(clang-analyzer-security.insecureAPI.*)
    memcpy(hash_table[hash].key, char_counts, ALPHABET_SIZE);
    hash_table[hash].first_idx = -1;
    hash_table[hash].count = 0;
    return (int)hash;
}

// NOLINTNEXTLINE(readability-identifier-naming)
char*** groupAnagrams(char** strs, int strs_size, int* return_size,
                      int** return_column_sizes) {
    for (int i = 0; i < HASH_SIZE; i++) {
        hash_table[i].used = false;
    }

    int num_groups = 0;
    int group_buckets[MAX_STRINGS];

    for (int i = 0; i < strs_size; i++) {
        unsigned char char_counts[ALPHABET_SIZE] = {0};
        for (const char* ptr = strs[i]; *ptr; ptr++) {
            char_counts[*ptr - 'a']++;
        }

        int bucket = find_or_create_bucket(char_counts);
        if (hash_table[bucket].count == 0) {
            group_buckets[num_groups++] = bucket;
        }
        next_indices[i] = hash_table[bucket].first_idx;
        hash_table[bucket].first_idx = i;
        hash_table[bucket].count++;
    }

    *return_size = num_groups;
    *return_column_sizes = result_sizes;

    for (int i = 0; i < num_groups; i++) {
        int bucket = group_buckets[i];
        int count = hash_table[bucket].count;
        result_sizes[i] = count;
        result_groups[i] = (char**)malloc((size_t)count * sizeof(char*));
        int idx = hash_table[bucket].first_idx;
        for (int j = count - 1; j >= 0; j--) {
            result_groups[i][j] = strs[idx];
            idx = next_indices[idx];
        }
    }

    return result_groups;
}
