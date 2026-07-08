/*
 * Problem #347: Top K Frequent Elements
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/5/2026, 10:04:27 AM
 * Link: https://leetcode.com/problems/top-k-frequent-elements/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    *returnSize=k;
    int* ans=(int*)malloc(sizeof(int)*k);
    int hash[20010]={0};
    for(int i=0;i<numsSize;i++){
        hash[nums[i]+10000]++;
    }
    int j=0;
    int tindex;
    int maxelement;
    while(j<k){
        int maxf=0;
        for(int i=0;i<20010;i++){
            if(hash[i]>maxf){
                maxf=hash[i];
                maxelement=i-10000;
                tindex=i;
            }
        }
        ans[j]=maxelement;
        hash[tindex]=0;
        j++;
    }
    return ans;
   
    
}
