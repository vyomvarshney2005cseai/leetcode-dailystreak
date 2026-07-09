/*
 * Problem #2433: Find The Original Array of Prefix Xor
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 1:38:40 AM
 * Link: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize) {
    *returnSize=prefSize;
    int* ans=(int*)malloc(sizeof(int)*prefSize);
    ans[0]=pref[0];
    for(int i=1;i<prefSize;i++){
        ans[i]=pref[i]^pref[i-1];
    }
    return ans;
}
