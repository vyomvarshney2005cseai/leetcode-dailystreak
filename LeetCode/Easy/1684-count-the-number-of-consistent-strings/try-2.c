/*
 * Problem #1684: Count the Number of Consistent Strings
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 1:20:37 AM
 * Link: https://leetcode.com/problems/count-the-number-of-consistent-strings/
 */

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int ans=0;
    int hash[26]={0};
    for(int i=0;i<strlen(allowed);i++){
        hash[allowed[i]-'a']=1;
    }
    for(int i=0;i<wordsSize;i++){
        int c=0;
        for(int j=0;words[i][j]!='\0';j++){
            if(hash[words[i][j]-'a']==1){
                c++;
            }
            else{
                break;
            }
        }
        if(c==strlen(words[i])){
            ans++;
        }
    }
    return ans;
}
