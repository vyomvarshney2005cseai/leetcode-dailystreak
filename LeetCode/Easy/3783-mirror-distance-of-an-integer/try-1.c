/*
 * Problem #3783: Mirror Distance of an Integer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/27/2026, 9:10:56 PM
 * Link: https://leetcode.com/problems/mirror-distance-of-an-integer/
 */

int mirrorDistance(int n) {
    int a=n;
    int rn=0;

    while(a!=0){
        rn=(a%10)+(rn*10);
        a/=10;
    }
    return abs(rn-n);
    }
