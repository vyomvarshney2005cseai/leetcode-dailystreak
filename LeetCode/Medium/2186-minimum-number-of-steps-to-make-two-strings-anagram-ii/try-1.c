/*
 * Problem #2186: Minimum Number of Steps to Make Two Strings Anagram II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/17/2026, 8:02:12 PM
 * Link: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/
 */

int minSteps(char* s, char* t) {
    int hashs[26]={0};
    int hasht[26]={0};
    for(int i=0;s[i]!='\0';i++){
        hashs[s[i]-'a']++;
    }
    for(int i=0;t[i]!='\0';i++){
        hasht[t[i]-'a']++;
    }
    long long ans=0;
for(int i=0;i<26;i++){
    if(hashs[i]!=hasht[i]){
        ans+=abs(hashs[i]-hasht[i]);
    }
    }
    return ans;

}
