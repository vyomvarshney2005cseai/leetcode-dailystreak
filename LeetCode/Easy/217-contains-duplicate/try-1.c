/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/10/2026, 8:00:52 AM
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

 int cmp(const void* a,const void *b){
        return (*(const int*)a - *(const int*)b);
    }
bool containsDuplicate(int* nums, int numsSize) {
   qsort(nums,numsSize,sizeof(int),cmp);
   bool ans=false;
   for(int i=0;i<numsSize-1;i++){
    if(nums[i]==nums[i+1]){
        ans=true;
        break;
    }
   }
   return ans;
}
