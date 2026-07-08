/*
 * Problem #3289: The Two Sneaky Numbers of Digitville
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 11:33:14 PM
 * Link: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int hash[101]={0};
    *returnSize=2;
    int* ans=(int*)malloc(sizeof(int)*2);
    for(int i=0;i<numsSize;i++){
        hash[nums[i]]++;
    } 
    int k=0;
    for(int i=0;i<101;i++){
        if(hash[i]==2){
        ans[k++]=i;
    }  
    }
    return ans;
}
