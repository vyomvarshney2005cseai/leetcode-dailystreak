/*
 * Problem #152: Maximum Product Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/24/2026, 9:51:54 PM
 * Link: https://leetcode.com/problems/maximum-product-subarray/
 */

int max(int a,int b){
    return (a>=b)?a:b;
}
int min(int a,int b){
    return (a>=b)?b:a;
}

int maxProduct(int* nums, int numsSize) {
    int maxp=nums[0];
    int currmax=nums[0];
    int currmin=nums[0];
    for(int i=1;i<numsSize;i++){
        int n=nums[i];
        if(n<0){
            int temp=currmax;
            currmax=currmin;
            currmin=temp;
        }
        currmax=max(n,currmax*n);
        currmin=min(n,currmin*n);
        maxp=max(maxp,currmax);
    }
    return maxp;
}
