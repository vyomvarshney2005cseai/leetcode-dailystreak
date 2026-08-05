long long sumAndMultiply(int n) {
    int sum=0;
    long long revnew=0;
    while(n!=0){
        if(n%10!=0){
        sum+=n%10;
        revnew=10*(revnew)+(n%10);
        }
        n/=10;
    }  
    long long new=0;
    while(revnew!=0){
        new=10*(new)+revnew%10;
        revnew/=10;
    } 
    return sum*new;
    
}