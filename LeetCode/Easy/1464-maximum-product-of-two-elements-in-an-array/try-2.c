/*
 * Problem #1464: Maximum Product of Two Elements in an Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/28/2026, 3:30:56 PM
 * Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
 */

int maxProduct(int* nums, int numsSize) {
    if(numsSize==2) return (nums[0]-1)*(nums[1]-1);
    int first;
    int second;
    int hash[1001]={0};
    for(int i=0;i<numsSize;i++){
        hash[nums[i]]++;
    }
    for(int i=1000;i>=0;i--){
        if(hash[i]>=2){
            return (i-1)*(i-1);
        }
        else if(hash[i]==1){
            first=i-1;
            break;
        }
    }
    for(int i=first;i>=0;i--){
        if(hash[i]>0){
           second=i-1;
            break;
        }
    }
    return first*second;
}
