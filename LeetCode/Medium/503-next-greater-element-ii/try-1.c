/*
 * Problem #503: Next Greater Element II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/3/2026, 9:38:19 AM
 * Link: https://leetcode.com/problems/next-greater-element-ii/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int* ans=(int*)malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;
    int i=0;
    while(i<numsSize){
            int max_idx=i;
            for(int j=i+1;j<numsSize;j++){
                   if(nums[max_idx]<nums[j]){
                           max_idx=j;
                           break;
                   }
            }
            if(max_idx==i){
             for(int j=0;j<i;j++){
                if(nums[max_idx]<nums[j]){
                           max_idx=j;
                           break;
                   }
             }}
            if(max_idx!=i){
                    ans[i]=nums[max_idx];

            }
            else{
                ans[i]=-1;
            }
            i++;
    }
    

    return ans;
    
}
