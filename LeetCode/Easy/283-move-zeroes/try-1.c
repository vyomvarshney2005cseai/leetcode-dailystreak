/*
 * Problem #283: Move Zeroes
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 9:47:15 AM
 * Link: https://leetcode.com/problems/move-zeroes/
 */

void moveZeroes(int* nums, int numsSize) {
    int k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){
            continue;
        }
        else{
            nums[k++]=nums[i];
        }
    }
    for(int i=k;i<numsSize;i++){
        nums[i]=0;
    }

}
