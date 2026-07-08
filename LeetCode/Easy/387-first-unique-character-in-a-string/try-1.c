/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 6:31:00 PM
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

int firstUniqChar(char* s) {
    int hash[123]={0};
    for(int i=0;i<strlen(s);i++){
        hash[s[i]]++;
    }
    int ans=-1;
    for(int i=0;i<strlen(s);i++){
        if(hash[s[i]]==1){
            ans=i;
            break;
        }
        
    }
    return ans;
    }




