/*
 * Problem #1678: Goal Parser Interpretation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 7/9/2026, 10:31:30 AM
 * Link: https://leetcode.com/problems/goal-parser-interpretation/
 */

class Solution:
    def interpret(self, command: str) -> str:
        return command.replace("()", "o").replace("(al)", "al")
