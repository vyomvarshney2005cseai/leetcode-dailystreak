/*
 * Problem #1470: Shuffle the Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 12:56:13 AM
 * Link: https://leetcode.com/problems/shuffle-the-array/
 */



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int x[n];
    int y[n];
    *returnSize=numsSize;
    for(int i=0;i<n;i++){
        x[i]=nums[i];
    }
    for(int i=n;i<numsSize;i++){
        y[i-n]=nums[i];
    }
    int xc=0;
    int yc=0;
    for(int i=0;i<numsSize;i++){
        if(i%2==0){
            nums[i]=x[xc++];
        }
        else{
            nums[i]=y[yc++];
        }
    }
    return nums;
}
