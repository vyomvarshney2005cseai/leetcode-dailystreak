/*
 * Problem #29: Divide Two Integers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/19/2026, 8:14:40 PM
 * Link: https://leetcode.com/problems/divide-two-integers/
 */

#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

int divide(int dividend, int divisor) {
    // Handle the explicit overflow case defined by the problem
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    // Determine the sign using bitwise XOR on the signs
    bool negative = (dividend < 0) ^ (divisor < 0);

    // Cast to long long BEFORE applying llabs to prevent overflow
    long long absDividend = llabs((long long)dividend);
    long long absDivisor = llabs((long long)divisor);
    
    long long result = 0;

    // Fast bit-shifting division loop
    while (absDividend >= absDivisor) {
        long long tempDivisor = absDivisor;
        long long count = 1;
        
        // Double the divisor until it exceeds the remaining dividend
        while (absDividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            count <<= 1;
        }
        
        // Subtract the chunk and add the count
        absDividend -= tempDivisor;
        result += count;
    }

    return negative ? (int)-result : (int)result;
}
