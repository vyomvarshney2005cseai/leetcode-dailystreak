bool isSubsequence(char* s, char* t) {
    int j=0;
    int k=0;
    int c=0;
    while(j<strlen(s) && k<strlen(t)){
        if(s[j]==t[k]){
            c++;
            j++;
        }
        else{
        }
        k++;
    }
    if(c!=strlen(s)){
        return false;
    }
    return true;
}