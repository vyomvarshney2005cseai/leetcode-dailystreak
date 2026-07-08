/*
 * Problem #88: Merge Sorted Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 12:49:03 AM
 * Link: https://leetcode.com/problems/merge-sorted-array/
 */

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int ans[m+n];
    int k=0;
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            ans[k++]=nums1[i++];  
        }
        else{
            ans[k++]=nums2[j++];
        }
    }
    while(i<m){
        ans[k++]=nums1[i++];
    }
    while(j<n){
        ans[k++]=nums2[j++];
    }
    for(int i=0;i<nums1Size;i++){
        nums1[i]=ans[i];
    }
    
}
