int numberOfBeams(char** bank, int bankSize) {
    if(bankSize<2) return 0;
    int ans=0;
    int prev=0;
    int* hash=(int*)calloc(bankSize,sizeof(int));
    for (int i=0;i<bankSize;i++){
        for(int j=0;bank[i][j]!='\0';j++){
            if(bank[i][j]=='1'){
                hash[i]++;
            } 
        }
        if (hash[i] > 0) {
            ans += prev * hash[i]; 
            prev = hash[i];       
        }
    }
    free(hash);
    return ans;
}