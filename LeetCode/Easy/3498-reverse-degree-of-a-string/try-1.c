/*
 * Problem #3498: Reverse Degree of a String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 12:47:03 AM
 * Link: https://leetcode.com/problems/reverse-degree-of-a-string/
 */

int reverseDegree(char* s) {
    int sum=0;
    for(int i=0;s[i]!=0;i++){
        sum+=(i+1)*(('z'-s[i])+1);
    }
    return sum;
}
