/*
 * Problem #2657: Find the Prefix Common Array of Two Arrays
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 10:17:39 AM
 * Link: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
 */

int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    *returnSize = ASize;
    int* c = (int*)malloc(sizeof(int) * ASize);
    if (c == NULL) return NULL;

    int hash[51] = {0};
    int common_count = 0;

    for (int i = 0; i < ASize; i++) {

        hash[A[i]]++;
        if (hash[A[i]] == 2) {
            common_count++;
        }
        hash[B[i]]++;
        if (hash[B[i]] == 2) {
            common_count++;
        }

        c[i] = common_count;
    }
    return c;
}
