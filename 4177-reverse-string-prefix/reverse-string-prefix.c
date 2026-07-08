char* reversePrefix(char* s, int k) {
    int len=strlen(s);
    char dup[k];
    for(int i=0;i<k;i++){
        dup[i]=s[k-i-1];
    }
    for(int i=0;i<k;i++){
        s[i]=dup[i];
    }
    return s;
}