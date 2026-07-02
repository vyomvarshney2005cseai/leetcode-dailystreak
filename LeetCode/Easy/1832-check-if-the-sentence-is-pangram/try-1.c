/*
 * Problem #1832: Check if the Sentence Is Pangram
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/27/2026, 8:48:47 PM
 * Link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/
 */

bool checkIfPangram(char* sentence) {
    bool hash[123];
    int n=strlen(sentence);
    for(int i=0;i<n;i++){
        hash[sentence[i]]=true;
    }
    for(int i=97;i<123;i++){
        if(hash[i]==true){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
    
}
