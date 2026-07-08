/*
 * Problem #2161: Partition Array According to Given Pivot
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 12:14:50 AM
 * Link: https://leetcode.com/problems/partition-array-according-to-given-pivot/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    *returnSize=numsSize;
    int* ans=(int*)malloc(sizeof(int)*numsSize);
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot){
            ans[j++]=nums[i];
        }
    }
     for(int i=0;i<numsSize;i++){
        if(nums[i]==pivot){
            ans[j++]=nums[i];
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]>pivot){
            ans[j++]=nums[i];
        }
    }
    return ans;
}
