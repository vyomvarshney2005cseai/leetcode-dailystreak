/*
 * Problem #3146: Permutation Difference between Two Strings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 6:58:02 PM
 * Link: https://leetcode.com/problems/permutation-difference-between-two-strings/
 */

int findPermutationDifference(char* s, char* t) {
    int hashs[26]={0};
    int hasht[26]={0};
    int n=strlen(s);
    for(int i=0;i<n;i++){
        hashs[s[i]-'a']=i;
        hasht[t[i]-'a']=i;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        ans+=abs(hashs[i]-hasht[i]);
    }
    return ans;
    


}
