/*
 * Problem #3794: Reverse String Prefix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 12:12:52 AM
 * Link: https://leetcode.com/problems/reverse-string-prefix/
 */

char* reversePrefix(char* s, int k) {
    int len=strlen(s);
    char dup[k];
    for(int i=0;i<k;i++){
        dup[i]=s[k-i-1];
    }
    for(int i=0;i<k;i++){
        s[i]=dup[i];
    }
    return s;
}
