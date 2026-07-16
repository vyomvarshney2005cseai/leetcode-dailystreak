/*
 * Problem #1768: Merge Strings Alternately
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/16/2026, 11:04:52 PM
 * Link: https://leetcode.com/problems/merge-strings-alternately/
 */

char * mergeAlternately(char * word1, char * word2){
    int j=0;
    int len1=strlen(word1);
    int len2=strlen(word2);
    char* ans=(char*)malloc(sizeof(char)*(len1+len2+1));
    if(len1>=len2){
        for(int i=0;i<len1;i++){
            if(i<len2){
                ans[j++]=word1[i];
                ans[j++]=word2[i];
            }
            else{
                ans[j++]=word1[i];
            }
        }
    }
    else{
        for(int i=0;i<len2;i++){
            if(i<len1){
                ans[j++]=word1[i];
                ans[j++]=word2[i];
            }
            else{
                ans[j++]=word2[i];
            }
        }
    }
    ans[j]='\0';
    return ans;
}
