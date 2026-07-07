/*
 * Problem #162: Find Peak Element
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/7/2026, 7:31:12 PM
 * Link: https://leetcode.com/problems/find-peak-element/
 */

int findPeakElement(int* nums, int numsSize) {
    int ans;
    if(numsSize==1) return 0;
    else if(nums[0]>nums[1]) return 0;
    else if(nums[numsSize-1]>nums[numsSize-2]) return numsSize-1;
    for(int i=1;i<numsSize-1;i++){
        if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
            ans=i;
            break;
        }
    }
    return ans;
}
