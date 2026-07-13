/*
 * Problem #704: Binary Search
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/12/2026, 9:59:54 PM
 * Link: https://leetcode.com/problems/binary-search/
 */

int search(int* nums, int numsSize, int target) {
    int start=0;
    int end=numsSize-1;
    
    while(start<=end){
        int mid=start+((end-start)/2);
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    return -1;

    
}
