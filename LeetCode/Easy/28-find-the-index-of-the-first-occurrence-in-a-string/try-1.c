/*
 * Problem #28: Find the Index of the First Occurrence in a String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/21/2026, 6:45:29 PM
 * Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 */

int strStr(char* haystack, char* needle) {
    int hl = strlen(haystack);
    int nl = strlen(needle);
    if (nl == 0) return 0;
    for (int i = 0; i <= hl - nl; i++) {
        int j = 0;
        while (j < nl && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == nl) {
            return i; 
        }
    }
    return -1;
}
