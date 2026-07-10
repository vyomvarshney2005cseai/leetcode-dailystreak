/*
 * Problem #7: Reverse Integer
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/10/2026, 11:15:19 PM
 * Link: https://leetcode.com/problems/reverse-integer/
 */

int reverse(int x){
    long long a=x;
    long long rever=0;
    while(a!=0){
        rever=(10*rever)+(a%10);
        a/=10;
    }
    if(rever>=INT_MIN && rever<INT_MAX){
    return rever;
}
else
{
    return 0;
}

}
