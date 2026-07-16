int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
long long gcdSum(int* nums, int numsSize) {
    int* prefixGcd = (int*)malloc(numsSize * sizeof(int));
    if (prefixGcd == NULL) {
        return 0; 
    }
    int current_max = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > current_max) {
            current_max = nums[i];
        }
        prefixGcd[i] = gcd(nums[i], current_max);
    }
    qsort(prefixGcd, numsSize, sizeof(int), compare);
    long long total_sum = 0; 
    int left = 0;
    int right = numsSize - 1;
    while (left < right) {
        total_sum += gcd(prefixGcd[left], prefixGcd[right]);
        left++;
        right--;
    }
    free(prefixGcd);
    return total_sum;
}