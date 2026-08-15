int subsetXORSum(int* nums, int numsSize) {
    int bitwise_or = 0;
    for (int i = 0; i < numsSize; i++) {
        bitwise_or |= nums[i];
    }
    return bitwise_or << (numsSize - 1);
}