/*
 * Problem #347: Top K Frequent Elements
 * Difficulty: Medium
 * Submission: Try 9
 * status: Accepted
 * Language: c
 * Date: 7/5/2026, 10:18:13 AM
 * Link: https://leetcode.com/problems/top-k-frequent-elements/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void swap(int a[2], int b[2]) {
    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    temp = a[1];
    a[1] = b[1];
    b[1] = temp;
}

int partition(int array[][2], int low, int high) {
    int pivot = array[high][1];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (array[j][1] >= pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }

    swap(array[i + 1], array[high]);
    return i + 1;
}

void quickSort(int array[][2], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {

    int hash[20001];

    for (int i = 0; i < 20001; i++) {
        hash[i] = 0;
    }

    for (int i = 0; i < numsSize; i++) {
        hash[nums[i] + 10000]++;
    }

    int count = 0;

    for (int i = 0; i < 20001; i++) {
        if (hash[i] > 0) {
            count++;
        }
    }

    int array[count][2];
    int m = 0;

    for (int i = 0; i < 20001; i++) {
        if (hash[i] > 0) {
            array[m][0] = i - 10000;
            array[m][1] = hash[i];
            m++;
        }
    }

    quickSort(array, 0, count - 1);

    int *ret = (int *)malloc(sizeof(int) * k);

    for (int i = 0; i < k; i++) {
        ret[i] = array[i][0];
    }

    *returnSize = k;
    return ret;
}
