/*
 * Problem #3760: Maximum Substrings With Distinct Start
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/7/2026, 11:33:56 PM
 * Link: https://leetcode.com/problems/maximum-substrings-with-distinct-start/
 */

int maxDistinct(char* s) {
    int hash[26]={0};
    for(int i=0;s[i]!='\0';i++){
        hash[s[i]-'a']++;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(hash[i]>=1){
            c++;
        }
    }
    return c;
}
