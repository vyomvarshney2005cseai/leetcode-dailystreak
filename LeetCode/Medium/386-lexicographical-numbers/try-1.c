/*
 * Problem #386: Lexicographical Numbers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 6:19:43 PM
 * Link: https://leetcode.com/problems/lexicographical-numbers/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* lexicalOrder(int n, int* returnSize) {
    *returnSize=n;
    int* ans=(int*)malloc(sizeof(int)*n);
    int current=1;
    for(int i=0;i<n;i++){
        ans[i]=current;
       if(current*10<=n){
        current*=10;
       }
       else{
        while(current%10==9 || current+1>n){
            current/=10;
        }
         current+=1;
       }
      
    }
    return ans;
}
