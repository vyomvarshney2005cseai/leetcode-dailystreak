int lengthOfLastWord(char* s) {
    int j=strlen(s)-1;
    while(s[j]==' '){
        j--;
    }
    int ans=0;
    for(int i=j;i>=0;i--){
        if(s[i]==' '){
            break;
        }
        else{
            ans++;
        }
    }
    return ans;
}