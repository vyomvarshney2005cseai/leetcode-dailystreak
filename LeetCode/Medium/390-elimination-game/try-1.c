/*
 * Problem #390: Elimination Game
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/4/2026, 10:52:13 PM
 * Link: https://leetcode.com/problems/elimination-game/
 */

int lastRemaining(int n) {
    return n == 1 ? 1 : 2 * (1 + n / 2 - lastRemaining(n / 2));
}
