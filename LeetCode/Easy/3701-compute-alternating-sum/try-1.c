/*
 * Problem #3701: Compute Alternating Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 5:54:11 PM
 * Link: https://leetcode.com/problems/compute-alternating-sum/
 */

int alternatingSum(int* nums, int numsSize) {
    int esum=0;
    int osum=0;
    for(int i=0;i<numsSize;i+=2){
        esum+=nums[i];
    }
    for(int i=1;i<numsSize;i+=2){
        osum+=nums[i];
    }
    return esum-osum;
}
