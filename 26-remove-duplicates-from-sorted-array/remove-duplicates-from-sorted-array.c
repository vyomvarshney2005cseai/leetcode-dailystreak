int removeDuplicates(int* nums, int numsSize) {
    int i=0;
    int k=0;
    while(i<numsSize-1){
        if(nums[i]==nums[i+1]){
            i++;
            continue;
        }
        else{
            nums[k++]=nums[i++];
        } 
    }
    nums[k++]=nums[numsSize-1];
    return k;
}