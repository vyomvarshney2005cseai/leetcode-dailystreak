/*
 * Problem #2824: Count Pairs Whose Sum is Less than Target
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 8:00:06 PM
 * Link: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
 */

int countPairs(int* nums, int numsSize, int target) {
    int ans=0;
    for(int i=0;i<numsSize;i++){
        int j=i+1;
        while(j<numsSize){
           if(nums[i]+nums[j]<target){
            ans++;
           }
           j++;
        }
    }
    return ans;
    
}
