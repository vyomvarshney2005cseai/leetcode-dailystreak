/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 6/20/2026, 4:51:41 PM
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
    if (len == 0) return 0; 
    int lls = 1;
    int lcs = 1;
    char cs[len + 1];
    cs[0] = s[0];

    for(int i = 1; i < len; i++){
        int jc = 0;
        int duplicate_index = -1;

        
        for(int j = 0; j < lcs; j++){
            if(s[i] != cs[j]){
                jc++;
            } else {
                duplicate_index = j;
            }
        } 
        if(jc == lcs){
            cs[lcs] = s[i];
            lcs = lcs + 1;
            if(lcs > lls){
                lls = lcs;
            }
        }
        else{
            
            int new_lcs = 0;
            for(int k = duplicate_index + 1; k < lcs; k++){
                cs[new_lcs++] = cs[k];
            }
            cs[new_lcs++] = s[i];
            lcs = new_lcs;
        }   
    }
    return lls;
}
