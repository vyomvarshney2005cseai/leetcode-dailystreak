int firstUniqChar(char* s) {
    int hash[26]={0};
    for(int i=0;i<strlen(s);i++){
        hash[s[i]-'a']++;
    }
    int ans=-1;
    for(int i=0;i<strlen(s);i++){
        if(hash[s[i]-'a']==1){
            ans=i;
            break;
        }
    }
    return ans;
    }



