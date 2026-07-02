/*
 * Problem #3512: Minimum Operations to Make Array Sum Divisible by K
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 12/27/2025, 12:24:50 AM
 * Link: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
 */

int minOperations(int* nums, int numsSize, int k) {
    int sum=0;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    return (sum%k);
}
