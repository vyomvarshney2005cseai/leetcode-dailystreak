int numberOfBeams(char** bank, int bankSize) {
    if(bankSize<2) return 0;
    int n=strlen(bank[0]);
    int* hash=(int*)calloc(bankSize,sizeof(int));
    for (int i=0;i<bankSize;i++){
        for(int j=0;j<n;j++){
            if(bank[i][j]=='1'){
                hash[i]++;
            }  
        }
    }
    int ans=0;
    int prev=0;
    for (int i = 0; i < bankSize; i++) {
        if (hash[i] > 0) {
            ans += prev * hash[i]; 
            prev = hash[i];       
        }
    }
    free(hash);
    return ans;
}