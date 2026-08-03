int smallestIndex(int* nums, int numsSize) {
    int min=INT_MAX;
    for(int i=0;i<numsSize;i++){
        int temp=nums[i];
        int tempsum=0;
        while(temp!=0){
            tempsum+=temp%10;
            temp/=10;
        }
        if(tempsum==i){
           return i;
        }
    }
   
    return -1;
}