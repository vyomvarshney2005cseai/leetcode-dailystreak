char* smallestPalindrome(char* s) {
    int hash[26]={0};
    int n=strlen(s);
    if(n==1) return s;
    char* ans=(char*)malloc(sizeof(char)*(n+1));
    for(int i=0;i<n;i++){
        hash[s[i]-'a']++;
    }
    int l=0;
    int r=n-1;
    char a='@';
    for(int i=0;i<26;i++){
        if(hash[i]%2==0){
            for(int j=0;j<(hash[i]/2);j++){
            ans[l++]=i+'a';
            ans[r--]=i+'a';
        }}
        else if(hash[i]==1){
            a=i+'a';
        }
        else if(hash[i]!=1 && hash[i]%2==1){
            for(int j=0;j<(hash[i]/2);j++){
            ans[l++]=i+'a';
            ans[r--]=i+'a';
            a=i+'a';
        }
        }
        }
        if(a!='@'){
        ans[n/2]=a;
        }
        ans[n]='\0';
        return ans;
    }
   


