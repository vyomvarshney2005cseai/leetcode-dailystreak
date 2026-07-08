/*
 * Problem #1769: Minimum Number of Operations to Move All Balls to Each Box
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 6:28:54 PM
 * Link: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {

    int len = strlen(boxes);
    int *ans = (int *)calloc(len, sizeof(int));
    
    int balls = 0;
    int ops = 0;
    
    
    for (int i = 0; i < len; i++) {
        ans[i] += ops;
        if (boxes[i] == '1') balls++;
        ops += balls;
    }
    
    balls = 0;
    ops = 0;
    
    for (int i = len - 1; i >= 0; i--) {
        ans[i] += ops;
        if (boxes[i] == '1') balls++;
        ops += balls;
    }
    
    *returnSize = len;
    return ans;

}
