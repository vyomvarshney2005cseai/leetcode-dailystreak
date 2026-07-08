/*
 * Problem #3668: Restore Finishing Order
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 12:02:20 AM
 * Link: https://leetcode.com/problems/restore-finishing-order/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    *returnSize=friendsSize;
    int* ans=(int*)malloc(sizeof(int)*friendsSize);
    int hash[101]={0};
    for(int i=0;i<friendsSize;i++){
        hash[friends[i]]++;
    }
    int j=0;
    for (int i=0;i<orderSize;i++){
        if(hash[order[i]]==1){
            ans[j++]=order[i];
        }
    }
    return ans;
}
