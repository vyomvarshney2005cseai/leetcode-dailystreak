/*
 * Problem #75: Sort Colors
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 9:22:20 AM
 * Link: https://leetcode.com/problems/sort-colors/
 */

void sortColors(int* nums, int numsSize) {
    int low = 0;
    int mid = 0;
    int high = numsSize - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            
            int temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;
        } 
        else if (nums[mid] == 1) {
           
            mid++;
        } 
        else { 
            int temp = nums[high];
            nums[high] = nums[mid];
            nums[mid] = temp;
            high--;
            
        }
    }
}
