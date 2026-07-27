/*
 * Problem #80: Remove Duplicates from Sorted Array II
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: c
 * Date: 7/27/2026, 8:06:36 AM
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
 */

int removeDuplicates(int* nums, int numsSize) {
    
    if(numsSize<=2)
    {
        return numsSize;
    }
    int r = 2;
    int w =2;
    for(r=2;r<numsSize;r++)
    {
        if(nums[r]!=nums[w-2])
        {
            nums[w]=nums[r];
            w++;
        }
    }
    return w;
}
