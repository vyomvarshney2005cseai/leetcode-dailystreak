/*
 * Problem #709: To Lower Case
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 1/2/2026, 1:59:48 PM
 * Link: https://leetcode.com/problems/to-lower-case/
 */

char* toLowerCase(char* s) {
    int len=strlen(s);
    for (int i=0;i<len;i++){
        s[i]=(char)tolower(s[i]);
    }
    return s;
    
}
