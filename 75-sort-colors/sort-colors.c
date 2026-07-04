void sortColors(int* nums, int numsSize) {
    int hash[3]={0};
    for(int i=0;i<numsSize;i++){
        hash[nums[i]]++;
    }
    int r=hash[0];
    int w=hash[1];
    int b=hash[2];
    for(int i=0;i<r;i++){
        nums[i]=0;
    }
     for(int i=r;i<r+w;i++){
        nums[i]=1;
    }
     for(int i=r+w;i<numsSize;i++){
        nums[i]=2;
    }
}