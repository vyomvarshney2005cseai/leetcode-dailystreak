/*
 * Problem #58: Length of Last Word
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/17/2026, 10:52:52 PM
 * Link: https://leetcode.com/problems/length-of-last-word/
 */

int lengthOfLastWord(char* s) {
    int j=strlen(s)-1;
    while(s[j]==' '){
        j--;
    }
    int ans=0;
    for(int i=j;i>=0;i--){
        if(s[i]==' '){
            break;
        }
        else{
            ans++;
        }
    }
    return ans;
}
