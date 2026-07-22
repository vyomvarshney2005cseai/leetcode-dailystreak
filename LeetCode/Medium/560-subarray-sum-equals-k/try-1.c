/*
 * Problem #560: Subarray Sum Equals K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/20/2026, 9:18:41 PM
 * Link: https://leetcode.com/problems/subarray-sum-equals-k/
 */


struct HashTable {
    int key;             // The prefix sum
    int value;           // Frequency of this prefix sum
    UT_hash_handle hh;   // Makes this structure hashable
};

int subarraySum(int* nums, int numsSize, int k) {
    struct HashTable *hashTable = NULL, *element, *tmp;
    int count = 0;
    int current_sum = 0;

    // 1. Initialize the hash map with (0, 1)
    // This handles the case where a subarray starting from index 0 equals k
    element = (struct HashTable*)malloc(sizeof(struct HashTable));
    element->key = 0;
    element->value = 1;
    HASH_ADD_INT(hashTable, key, element);

    for (int i = 0; i < numsSize; i++) {
        current_sum += nums[i];
        int target = current_sum - k;

        // 2. Check if (current_sum - k) exists in the hash map
        HASH_FIND_INT(hashTable, &target, element);
        if (element != NULL) {
            count += element->value; // Add the frequency of that past sum
        }

        // 3. Add or update the current_sum in the hash map
        HASH_FIND_INT(hashTable, &current_sum, element);
        if (element != NULL) {
            element->value++;
        } else {
            element = (struct HashTable*)malloc(sizeof(struct HashTable));
            element->key = current_sum;
            element->value = 1;
            HASH_ADD_INT(hashTable, key, element);
        }
    }

    // 4. Free the hash table memory (Crucial in C to avoid memory leaks)
    HASH_ITER(hh, hashTable, element, tmp) {
        HASH_DEL(hashTable, element);
        free(element);
    }

    return count;
}

