/*
 * Problem #1920: Build Array from Permutation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 12:05:23 AM
 * Link: https://leetcode.com/problems/build-array-from-permutation/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* ans=(int*)malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[nums[i]];
    }
    return ans;

    
}
