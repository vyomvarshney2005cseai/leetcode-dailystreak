/*
 * Problem #1365: How Many Numbers Are Smaller Than the Current Number
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 9:20:20 PM
 * Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    
    *returnSize=n;
    int* ans=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if((i!=j) && (nums[i]>nums[j])){
                c++;
            }
        }
        ans[i]=c;
        
    }
    return ans;
}
