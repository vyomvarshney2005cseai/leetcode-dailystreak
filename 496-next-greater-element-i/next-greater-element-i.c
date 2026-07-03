/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
int nge(int index){
    int max_idx=index;
    for(int j=index+1;j<nums2Size;j++){
        if(nums2[j]>nums2[max_idx]){
            max_idx=j;
            break;
        }
    }
    if(max_idx!=index){
        return nums2[max_idx];
    }
    else{
        return -1;
    }
}
    *returnSize=nums1Size;
    int* ans=(int*)malloc(sizeof(int)*nums1Size);
    int i=0;
    int k=0;
    while(i<nums1Size){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                ans[k++]=nge(j);
                break;
            }
        }
        i++;  
    }
    return ans;
}