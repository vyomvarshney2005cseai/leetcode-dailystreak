int maxRotateFunction(int* nums, int numsSize) {
    long sum_elements = 0;
    long current_f = 0;
    for (int i = 0; i < numsSize; i++) {
        sum_elements += nums[i];
        current_f +=i * nums[i];
    }
    long max_val = current_f;
    for (int k = 1; k < numsSize; k++) {
        current_f = current_f + sum_elements -numsSize * nums[numsSize - k];
        if (current_f > max_val) {
            max_val = current_f;
        }
    }

    return max_val;
}