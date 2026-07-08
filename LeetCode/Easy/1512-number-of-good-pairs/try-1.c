/*
 * Problem #1512: Number of Good Pairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 10:40:28 PM
 * Link: https://leetcode.com/problems/number-of-good-pairs/
 */

int numIdenticalPairs(int* nums, int numsSize) {
    int ans=0;
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                ans++;
            }
        }
    }
    return ans;
}
