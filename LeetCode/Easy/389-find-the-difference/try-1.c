/*
 * Problem #389: Find the Difference
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 6:47:21 PM
 * Link: https://leetcode.com/problems/find-the-difference/
 */

char findTheDifference(char* s, char* t) {
    char ans = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        ans ^= s[i];
    }
    for (int i = 0; t[i] != '\0'; i++) {
        ans ^= t[i];
    }
    return ans;
}
