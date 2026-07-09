/*
 * Problem #3285: Find Indices of Stable Mountains
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 9:33:27 PM
 * Link: https://leetcode.com/problems/find-indices-of-stable-mountains/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int n=heightSize;
    int t=threshold;
    int d[n];
     for(int i=0;i<n;i++){
        d[i]=0;
     }
    int dc=0;
    for(int i=1;i<n;i++){
        if(height[i-1]>t){
            d[i]=1;
            dc++;
        }
    }
    *returnSize=dc;
    int* ans=(int*)malloc(sizeof(int)*dc);
    int j=0;
    while(j<dc){
     for(int i=1;i<n;i++){
        if(d[i]==1){
            ans[j++]=i;
        }
     }
     }
     return ans;
}
