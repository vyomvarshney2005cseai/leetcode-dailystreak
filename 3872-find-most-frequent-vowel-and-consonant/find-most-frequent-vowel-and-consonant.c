int maxFreqSum(char* s) {
    int hash[26]={0};
    for(int i=0;s[i]!=0;i++){
        hash[s[i]-'a']++;
    }
    int vmax=0;
    int cmax=0;
    for(int i=0;i<26;i++){
        if(i==0 ||i==4 ||i==8 ||i==14 ||i==20){
            if(hash[i]>vmax){
                vmax=hash[i];
            }
        }
        else{
            if(hash[i]>cmax){
                cmax=hash[i];
            }
        }
    }
    return cmax+vmax;
    
}