/*
 * Problem #367: Valid Perfect Square
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 7/10/2026, 10:47:19 AM
 * Link: https://leetcode.com/problems/valid-perfect-square/
 */

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if (math.sqrt(num)).is_integer():
            return True
        return False
        
