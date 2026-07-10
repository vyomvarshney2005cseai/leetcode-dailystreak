/*
 * Problem #367: Valid Perfect Square
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: c
 * Date: 7/10/2026, 11:18:04 AM
 * Link: https://leetcode.com/problems/valid-perfect-square/
 */

bool isPerfectSquare(int num) {
    double ans=sqrt(num);
    if(ans!=floor(ans)){
        return false;
    }
    return true;
}
