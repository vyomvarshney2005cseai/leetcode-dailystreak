/*
 * Problem #2574: Left and Right Sum Differences
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 11:43:47 PM
 * Link: https://leetcode.com/problems/left-and-right-sum-differences/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));

    int totalSum = 0;
    int leftSum = 0;


    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }


    for (int i = 0; i < numsSize; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        answer[i] = abs(leftSum - rightSum);
        leftSum += nums[i];
    }

    *returnSize = numsSize;
    return answer;
}
