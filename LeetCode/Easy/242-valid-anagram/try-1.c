/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/12/2026, 12:46:34 PM
 * Link: https://leetcode.com/problems/valid-anagram/
 */

bool isAnagram(char* s, char* t) {
    int ls=strlen(s);
    int lt=strlen(t);
    bool a=true;
    int freq[26]={0};
    if(ls!=lt){
        a=false;
    }
    else{ 
       for(int i=0;i<ls;i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }
     for(int i=0;i<26;i++){
        if(freq[i]!=0){
            a=false;
            break;
        }
     }
    
}
return a;
}
