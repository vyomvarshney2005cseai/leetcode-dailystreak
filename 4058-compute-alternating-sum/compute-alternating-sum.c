int alternatingSum(int* nums, int numsSize) {
    int esum=0;
    int osum=0;
    for(int i=0;i<numsSize;i+=2){
        esum+=nums[i];
    }
    for(int i=1;i<numsSize;i+=2){
        osum+=nums[i];
    }
    return esum-osum;
}