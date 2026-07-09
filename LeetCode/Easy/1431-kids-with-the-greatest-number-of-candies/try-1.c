/*
 * Problem #1431: Kids With the Greatest Number of Candies
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 10:56:01 AM
 * Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* ans=(bool*)malloc(sizeof(int)*candiesSize);
    *returnSize=candiesSize;
    int max=0;
    for(int i=0;i<candiesSize;i++){
        if(max<candies[i]){
            max=candies[i];
        }
    }
    for(int i=0;i<candiesSize;i++){
        candies[i]+=extraCandies;
    }
    for(int i=0;i<candiesSize;i++){
        if(candies[i]>=max){
            ans[i]=true;
        }
        else{
            ans[i]=false;
        }
    }
    return ans;
}
