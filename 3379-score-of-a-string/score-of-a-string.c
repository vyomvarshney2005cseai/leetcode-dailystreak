int scoreOfString(char* s) {
    int n=strlen(s);
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans+=abs(s[i]-s[i+1]);
    }
    return ans;
}