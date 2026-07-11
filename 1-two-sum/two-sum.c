/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define TABLE_SIZE 50009 

int hashKeys[TABLE_SIZE];
int hashValues[TABLE_SIZE];
bool isOccupied[TABLE_SIZE]; 

int hash(int key) {
    return abs(key) % TABLE_SIZE;
}

void insert(int key, int value) {
    int index = hash(key);
    
    while (isOccupied[index]) {
        index = (index + 1) % TABLE_SIZE; 
    }
    
    hashKeys[index] = key;
    hashValues[index] = value;
    isOccupied[index] = true; 
}

int search(int key) {
    int index = hash(key);
    while (isOccupied[index]) {
        if (hashKeys[index] == key) {
            return hashValues[index]; 
        }
        index = (index + 1) % TABLE_SIZE; 
    }
    return -1; 
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    
    
    for (int i = 0; i < TABLE_SIZE; i++) {
        isOccupied[i] = false;
    }
    
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int complementIndex = search(complement);
        
        if (complementIndex != -1) {
            ans[0] = complementIndex;
            ans[1] = i;
            return ans; 
        }   
        
        insert(nums[i], i); 
    }
    
    return ans;
}