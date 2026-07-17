
bool validPalindrome(char* s) {
    bool ispinr(int i,int j){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
 }
 int l=0;
 int r=strlen(s)-1;
 if(r+1<2) return true;
 bool ans=true;
 while(l<=r){
    if(s[l]!=s[r]){
        ans= (ispinr(l+1,r) || ispinr(l,r-1)); 
        break;
    }
    l++;
    r--;
 }

 return ans;
}