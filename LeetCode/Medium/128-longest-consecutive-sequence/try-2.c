/*
 * Problem #128: Longest Consecutive Sequence
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 2:00:24 PM
 * Link: https://leetcode.com/problems/longest-consecutive-sequence/
 */

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int longestConsecutive(int* nums, int numsSize) {
    if(numsSize==0) return 0;
    qsort(nums, numsSize, sizeof(int), compare);
    int c=1;
    int max=1;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]+1==nums[i+1]){
            c++;
        }
        else if(nums[i]==nums[i+1]){
            continue;
        }
        else{
            c=1;
        }
        if(c>max){
            max=c;
        }
    }
    return max;
}
