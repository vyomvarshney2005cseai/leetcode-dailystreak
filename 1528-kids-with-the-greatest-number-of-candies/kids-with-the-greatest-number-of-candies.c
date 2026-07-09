/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* ans=(bool*)malloc(sizeof(int)*candiesSize);
    *returnSize=candiesSize;
    int max=0;
    for(int i=0;i<candiesSize;i++){
        if(max<candies[i]){
            max=candies[i];
        }
    }
    for(int i=0;i<candiesSize;i++){
        candies[i]+=extraCandies;
    }
    for(int i=0;i<candiesSize;i++){
        if(candies[i]>=max){
            ans[i]=true;
        }
        else{
            ans[i]=false;
        }
    }
    return ans;
}