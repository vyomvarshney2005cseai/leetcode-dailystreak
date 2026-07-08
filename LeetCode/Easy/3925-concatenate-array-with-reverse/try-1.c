/*
 * Problem #3925: Concatenate Array With Reverse
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/7/2026, 11:22:30 PM
 * Link: https://leetcode.com/problems/concatenate-array-with-reverse/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    *returnSize=2*numsSize;
    int* ans=(int*)malloc(sizeof(int)*2*numsSize);
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[i];
        ans[numsSize+i]=nums[numsSize-1-i];
    }
    return ans;
    
}
