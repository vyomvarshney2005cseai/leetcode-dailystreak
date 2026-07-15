char* convertToTitle(int columnNumber) {
    int n=columnNumber;
    char *ans = calloc(9, sizeof(char));
    char *ans1 = calloc(9, sizeof(char));
    int l=0;
    while (n!=0){
        ans[l++]=((n-1))%26+'A';
        n=(n-1)/26;
    }
    ans[l]='\0';
    for(int i=0;i<l;i++){
        ans1[i]=ans[l-1-i];
    }
    ans1[l]='\0';
    free(ans);
    return ans1;
}