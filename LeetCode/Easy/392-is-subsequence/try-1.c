/*
 * Problem #392: Is Subsequence
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 11:27:43 PM
 * Link: https://leetcode.com/problems/is-subsequence/
 */

bool isSubsequence(char* s, char* t) {
    int j=0;
    int k=0;
    int c=0;
    while(j<strlen(s) && k<strlen(t)){
        if(s[j]==t[k]){
            c++;
            j++;
        }
        else{
        }
        k++;
    }
    if(c!=strlen(s)){
        return false;
    }
    return true;
}
