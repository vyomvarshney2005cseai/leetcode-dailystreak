/*
 * Problem #3467: Transform Array by Parity
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 11:01:08 PM
 * Link: https://leetcode.com/problems/transform-array-by-parity/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int ec=0;
    int oc=0;
    int* ans=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    for(int i=0;i<ec;i++){
        ans[i]=0;
    }
    for(int i=ec;i<numsSize;i++){
        ans[i]=1;
    }
    return ans;
}
