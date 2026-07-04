/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 6:35:48 PM
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

int firstUniqChar(char* s) {
    int hash[26]={0};
    for(int i=0;s[i]!=0;i++){
        hash[s[i]-'a']++;
    }
    int ans=-1;
    for(int i=0;s[i]!=0;i++){
        if(hash[s[i]-'a']==1){
            ans=i;
            break;
        }
    }
    return ans;
    }




