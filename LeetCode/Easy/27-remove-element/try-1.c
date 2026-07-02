/*
 * Problem #27: Remove Element
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/18/2026, 8:22:48 AM
 * Link: https://leetcode.com/problems/remove-element/
 */

int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    int _;
    for(int i=0;i<numsSize;i++){
        if(val==nums[i]){
            continue;
        }
        else{
            nums[k]=nums[i];
            k++;
        }
    }
    for(int i=k;i<numsSize;i++){
        nums[i]=_;
    }
    return k;
}
