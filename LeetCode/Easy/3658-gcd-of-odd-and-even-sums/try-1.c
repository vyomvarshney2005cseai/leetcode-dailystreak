/*
 * Problem #3658: GCD of Odd and Even Sums
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/15/2026, 11:54:25 PM
 * Link: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
 */

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int gcdOfOddEvenSums(int n) {
    int es=0;
    int os=0;
    for(int i=1;i<=2*n;i++){
        if(i%2==0){
            es+=i;
        }
        else{
            os+=i;
        }
    }
    int ans=gcd(os,es);
    return ans;
}
