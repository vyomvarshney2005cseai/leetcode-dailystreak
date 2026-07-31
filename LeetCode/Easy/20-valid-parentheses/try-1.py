/*
 * Problem #20: Valid Parentheses
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 7/29/2026, 11:08:13 PM
 * Link: https://leetcode.com/problems/valid-parentheses/
 */

class Solution:
    def isValid(self, s: str) -> bool:
        while ('()' in s) or ('[]' in s) or ('{}' in s): s = s.replace('()', '').replace('[]', '').replace('{}', '')
        return s == ''
        
