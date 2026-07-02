/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 4
 * status: Accepted
 * Language: c
 * Date: 6/22/2026, 3:55:06 PM
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
    if (len == 0) return 0;


    int last_seen[256];
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1; 
    }

    int max_len = 0;
    int start = 0; 


    for (int i = 0; i < len; i++) {
        unsigned char current_char = s[i];


        if (last_seen[current_char] >= start) {

            start = last_seen[current_char] + 1;
        }


        last_seen[current_char] = i;


        int current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    return max_len;
}
