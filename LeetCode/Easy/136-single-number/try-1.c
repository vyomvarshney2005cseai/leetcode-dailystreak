/*
 * Problem #136: Single Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/23/2026, 12:47:03 PM
 * Link: https://leetcode.com/problems/single-number/
 */

int singleNumber(int* nums, int numsSize) {
    int n=numsSize;
    int hash[60009]={0};
    for(int i=0;i<n;i++){
        hash[nums[i]+30000]++;
    }
    int ans;
    for(int i=0;i<n;i++){
        if(hash[nums[i]+30000]==1){
            ans=nums[i];
        }
    }
    return ans;
}
