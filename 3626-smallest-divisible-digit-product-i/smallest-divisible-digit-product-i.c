int smallestNumber(int n, int t) {
    int temp;
    int pro;
    while(n){
    temp=n;
    pro=1;
    while(temp!=0){
        pro*=temp%10;
        temp/=10;
    }
    if(pro%t==0){
        break;
    }
    else{
        n++;
    }
    }
    return n;
}