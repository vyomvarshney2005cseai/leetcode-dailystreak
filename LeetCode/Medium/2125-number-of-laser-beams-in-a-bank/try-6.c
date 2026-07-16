/*
 * Problem #2125: Number of Laser Beams in a Bank
 * Difficulty: Medium
 * Submission: Try 6
 * status: Accepted
 * Language: c
 * Date: 7/15/2026, 8:17:44 PM
 * Link: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
 */

int numberOfBeams(char** bank, int bankSize) {
    if(bankSize<2) return 0;
    int ans=0;
    int prev=0;
    for (int i=0;i<bankSize;i++){
        int curr=0;
        for(int j=0;bank[i][j]!='\0';j++){
            if(bank[i][j]=='1'){
                curr++;
            } 
        }
        if (curr > 0) {
            ans += prev * curr; 
            prev = curr;       
        }
    }
    return ans;
}
