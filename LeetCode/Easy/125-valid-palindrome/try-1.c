/*
 * Problem #125: Valid Palindrome
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/14/2026, 1:34:59 PM
 * Link: https://leetcode.com/problems/valid-palindrome/
 */

bool isPalindrome(char* s) {
    int n=strlen(s);
    if(n<2) return true;
    int start=0;
    int end=n-1;
    while(start<=end){
        
        if(!((s[start]>='A' && s[start]<='Z') || (s[start]>='a' && s[start]<='z') || (s[start]>='0' && s[start]<='9'))){
            start++;
        }

        else if(!((s[end]>='A' && s[end]<='Z') || (s[end]>='a' && s[end]<='z') || (s[end]>='0' && s[end]<='9'))){
            end--;
        }

        else if(((s[end]>='A' && s[end]<='Z') || (s[end]>='a' && s[end]<='z') || (s[end]>='0' && s[end]<='9')) && 
                ((s[start]>='A' && s[start]<='Z') || (s[start]>='a' && s[start]<='z') || (s[start]>='0' && s[start]<='9'))){
            
            if(tolower(s[start]) == tolower(s[end])){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
