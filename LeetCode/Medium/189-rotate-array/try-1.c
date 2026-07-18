/*
 * Problem #189: Rotate Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/18/2026, 4:43:53 PM
 * Link: https://leetcode.com/problems/rotate-array/
 */

void reverse(int* nums,int start,int end){
    while(start<end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}
void rotate(int* nums, int numsSize, int k) {
    int n=numsSize;
    if(n>1){
        k%=n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
    
}
