/*
 * Problem #3541: Find Most Frequent Vowel and Consonant
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/9/2026, 12:42:21 AM
 * Link: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
 */

int maxFreqSum(char* s) {
    int hash[26]={0};
    for(int i=0;s[i]!=0;i++){
        hash[s[i]-'a']++;
    }
    int vmax=0;
    int cmax=0;
    for(int i=0;i<26;i++){
        if(i==0 ||i==4 ||i==8 ||i==14 ||i==20){
            if(hash[i]>vmax){
                vmax=hash[i];
            }
        }
        else{
            if(hash[i]>cmax){
                cmax=hash[i];
            }
        }
    }
    return cmax+vmax;
    
}
