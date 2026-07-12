/*
 * Problem #41: First Missing Positive
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: c
 * Date: 7/11/2026, 11:45:54 AM
 * Link: https://leetcode.com/problems/first-missing-positive/
 */

int firstMissingPositive(int* nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        while (nums[i] >= 1 &&
               nums[i] <= numsSize &&
               nums[i] != nums[nums[i] - 1])
        {
            int temp = nums[i];
            nums[i] = nums[temp - 1];
            nums[temp - 1] = temp;
        }
    }

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != i + 1)
        {
            return i + 1;
        }
    }

    return numsSize + 1;
}
