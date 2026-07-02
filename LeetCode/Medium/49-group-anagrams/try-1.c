/*
 * Problem #49: Group Anagrams
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/16/2026, 12:33:49 PM
 * Link: https://leetcode.com/problems/group-anagrams/
 */


#define HASH_SIZE 20011 


typedef struct {
    char key[60];         
    int* originalIndices;  
    int count;             
    int capacity;         
    bool isOccupied;       
} HashEntry;


unsigned int getHash(char* str) {
    unsigned int hash = 5381;
    int c;
    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c;
    }
    return hash % HASH_SIZE;
}


void createKey(char* str, char* key) {
    int count[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }
    
    int len = 0;
    for (int i = 0; i < 26; i++) {
        len += sprintf(key + len, "%d#", count[i]);
    }
}

char*** groupAnagrams(char** strs, int strsSize, int* returnSize, int** returnColumnSizes) {

    HashEntry* hashTable = calloc(HASH_SIZE, sizeof(HashEntry));
    int uniqueGroups = 0;

    for (int i = 0; i < strsSize; i++) {
        char key[60];
        createKey(strs[i], key);
        
        unsigned int hashIndex = getHash(key);
        

        while (hashTable[hashIndex].isOccupied && strcmp(hashTable[hashIndex].key, key) != 0) {
            hashIndex = (hashIndex + 1) % HASH_SIZE;
        }


        if (!hashTable[hashIndex].isOccupied) {
            hashTable[hashIndex].isOccupied = true;
            strcpy(hashTable[hashIndex].key, key);
            hashTable[hashIndex].capacity = 4;
            hashTable[hashIndex].originalIndices = malloc(hashTable[hashIndex].capacity * sizeof(int));
            hashTable[hashIndex].count = 0;
            
            hashTable[hashIndex].originalIndices[hashTable[hashIndex].count++] = i;
            uniqueGroups++;
        } 

        else {
            if (hashTable[hashIndex].count >= hashTable[hashIndex].capacity) {
                hashTable[hashIndex].capacity *= 2;
                hashTable[hashIndex].originalIndices = realloc(hashTable[hashIndex].originalIndices, 
                                                               hashTable[hashIndex].capacity * sizeof(int));
            }
            hashTable[hashIndex].originalIndices[hashTable[hashIndex].count++] = i;
        }
    }


    char*** result = malloc(uniqueGroups * sizeof(char**));
    *returnColumnSizes = malloc(uniqueGroups * sizeof(int));
    *returnSize = uniqueGroups;

    int groupIdx = 0;

    for (int i = 0; i < HASH_SIZE; i++) {
        if (hashTable[i].isOccupied) {
            (*returnColumnSizes)[groupIdx] = hashTable[i].count;
            result[groupIdx] = malloc(hashTable[i].count * sizeof(char*));
            for (int j = 0; j < hashTable[i].count; j++) {
                result[groupIdx][j] = strs[hashTable[i].originalIndices[j]];
            }
            groupIdx++;
            free(hashTable[i].originalIndices);
        }
    }
    

    free(hashTable);

    return result;
}
