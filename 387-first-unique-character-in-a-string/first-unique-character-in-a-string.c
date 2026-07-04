int firstUniqChar(char* s) {
    int hash[123]={0};
    for(int i=0;i<strlen(s);i++){
        hash[s[i]]++;
    }
    int ans=-1;
    for(int i=0;i<strlen(s);i++){
        if(hash[s[i]]==1){
            ans=i;
            break;
        }
        
    }
    return ans;
    }



