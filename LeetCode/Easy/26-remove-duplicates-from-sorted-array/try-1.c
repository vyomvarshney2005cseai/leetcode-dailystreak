/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 9:35:22 AM
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

int removeDuplicates(int* nums, int numsSize) {
    int i=0;
    int k=0;
    while(i<numsSize-1){
        if(nums[i]==nums[i+1]){
            i++;
            continue;
        }
        else{
            nums[k++]=nums[i++];
        } 
    }
    nums[k++]=nums[numsSize-1];
    return k;
}
