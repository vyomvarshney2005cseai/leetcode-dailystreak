/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* majorityElement(int* nums, int numsSize, int* returnSize) {
    int n=numsSize;
    int el1=INT_MIN;
    int el2=INT_MIN;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==el1) cnt1++;
        else if(nums[i]==el2) cnt2++;
        else if(cnt1==0){
            el1=nums[i];
            cnt1=1;
        } 
        else if(cnt2==0){
            el2=nums[i];
            cnt2=1;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
     cnt1=0;
     cnt2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==el1) cnt1++;
        else if(nums[i]==el2) cnt2++;
    }
    *returnSize=0;
    int* ans=(int*)malloc(sizeof(int)*2);
    if(cnt1>n/3){
        ans[(*returnSize)++]=el1;
    }
    if(cnt2>n/3){
        ans[(*returnSize)++]=el2;
    }
    if((*returnSize==2)&&ans[0]>ans[1]){
        long long temp=ans[0];
        ans[0]=ans[1];
        ans[1]=temp;
    }
    return ans;
}