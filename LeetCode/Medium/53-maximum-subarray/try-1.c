/*
 * Problem #53: Maximum Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/2/2026, 9:26:39 PM
 * Link: https://leetcode.com/problems/maximum-subarray/
 */

int maxSubArray(int* nums, int numsSize) {
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return max;
}
