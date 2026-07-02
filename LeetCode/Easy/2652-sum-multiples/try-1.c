/*
 * Problem #2652: Sum Multiples
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 12/25/2025, 10:21:38 AM
 * Link: https://leetcode.com/problems/sum-multiples/
 */

int sumOfMultiples(int n) {
    int c=0,sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0 ||i%5==0||i%7==0){
            sum+=i;
        }
    }
    return sum;
}
