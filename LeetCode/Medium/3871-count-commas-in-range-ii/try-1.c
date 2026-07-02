/*
 * Problem #3871: Count Commas in Range II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 3/15/2026, 3:28:35 PM
 * Link: https://leetcode.com/problems/count-commas-in-range-ii/
 */

long long countCommas(long long n) {
    long long c=0;
    long long threshold=1000;
    while(threshold<=n){
        c+=(n-threshold+1);
        threshold*=1000;
    }
    return c;

    
}
