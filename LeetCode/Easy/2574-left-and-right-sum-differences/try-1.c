/*
 * Problem #2574: Left and Right Sum Differences
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 11:42:11 PM
 * Link: https://leetcode.com/problems/left-and-right-sum-differences/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int rsum[numsSize];
    int lsum[numsSize];
    for(int i=0;i<numsSize;i++){
        rsum[i]=0;
        lsum[i]=0;
    }
    int* ans=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            rsum[i]+=nums[j];
        }
        for(int k=0;k<i;k++){
            lsum[i]+=nums[k];
        }
        ans[i]=abs(lsum[i]-rsum[i]);
    }
    return ans;
    
}
