/*
 * Problem #80: Remove Duplicates from Sorted Array II
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/27/2026, 8:05:35 AM
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
 */

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize <= 2) {
        return numsSize;
    }
    int k = 2; 
    for (int i = 2; i < numsSize; i++) {
        if (nums[i] != nums[k - 2]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
