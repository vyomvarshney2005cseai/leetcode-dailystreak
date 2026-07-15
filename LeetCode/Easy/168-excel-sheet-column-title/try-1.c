/*
 * Problem #168: Excel Sheet Column Title
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/15/2026, 12:55:39 PM
 * Link: https://leetcode.com/problems/excel-sheet-column-title/
 */

char* convertToTitle(int columnNumber) {
    int n=columnNumber;
    char *ans = calloc(9, sizeof(char));
    char *ans1 = calloc(9, sizeof(char));
    int l=0;
    while (n!=0){
        ans[l++]=((n-1))%26+'A';
        n=(n-1)/26;
    }
    ans[l]='\0';
    for(int i=0;i<l;i++){
        ans1[i]=ans[l-1-i];
    }
    ans1[l]='\0';
    return ans1;
}
