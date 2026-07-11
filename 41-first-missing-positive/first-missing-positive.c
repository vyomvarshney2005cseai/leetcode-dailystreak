
#include <limits.h>
int cmpc(const void* a,const void* b){
    int arg1=*(const int*)a;
    int arg2=*(const int*)b;
    if(arg1<arg2) return -1;
    if(arg1>arg2) return 1;
    return 0;
}
int firstMissingPositive(int* nums, int numsSize) {
    int min=INT_MAX;
    int ans;
    int max=1;

    for (int i = 0; i < numsSize; i++){
        if(nums[i]<1){
            nums[i]=INT_MAX;
        }
        else{
            if(nums[i]<min){
                min=nums[i];
            }
            if(nums[i]>max){
                max=nums[i];
            }
           
        }
    }
    if(min-1>0){
        return 1;
    }
    else if (min-1==0)
    {
        qsort(nums,numsSize,sizeof(int),cmpc);
        for(int i=0;i<numsSize-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else if(nums[i]+1!=nums[i+1]){
                return nums[i]+1;
            }
        }
    }
    return max+1;
}


