/*
 * Problem #344: Reverse String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/13/2026, 10:30:20 AM
 * Link: https://leetcode.com/problems/reverse-string/
 */

void reverseString(char* s, int sSize) {
    int start=0;
    int end=sSize-1;
   while(start<=end){
     char temp=s[start];
     s[start]=s[end];
     s[end]=temp;
     start++;
     end--;
       } 
}
