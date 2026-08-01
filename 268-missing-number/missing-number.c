int missingNumber(int* nums, int numsSize) {
    int n=numsSize;
    int hash[10001]={0};
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<10001;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return 1;
}