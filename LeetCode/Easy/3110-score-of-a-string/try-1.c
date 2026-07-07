/*
 * Problem #3110: Score of a String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/7/2026, 11:44:35 PM
 * Link: https://leetcode.com/problems/score-of-a-string/
 */

int scoreOfString(char* s) {
    int n=strlen(s);
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans+=abs(s[i]-s[i+1]);
    }
    return ans;
}
