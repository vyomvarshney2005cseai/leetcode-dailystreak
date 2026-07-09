int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int n=numsSize;
    int c=1;
    int max=1;
    int hash[2]={0,0};
    for(int i=0;i<=n-1;i++){
        hash[nums[i]]++;
    }
    if(hash[1]==0){
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1] && nums[i]==1){
            c++;
        }
        else{
            c=1;
        }
        if(c>max){
            max=c;
        }
    }
    return max;

}