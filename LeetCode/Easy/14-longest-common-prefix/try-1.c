/*
 * Problem #14: Longest Common Prefix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/14/2026, 5:05:32 PM
 * Link: https://leetcode.com/problems/longest-common-prefix/
 */

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    if (strsSize == 1) return strs[0];
    int len = strlen(strs[0]);
    for (int i = 0; i < len; i++) {
        char ch = strs[0][i]; 
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != ch) {
                strs[0][i] = '\0'; 
                return strs[0];
            }
        }
    }
    return strs[0];
}
