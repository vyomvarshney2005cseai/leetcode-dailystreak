int reverse(int x){
    long long a=x;
    long long rever=0;
    while(a!=0){
        rever=(10*rever)+(a%10);
        a/=10;
    }
    if(rever>=INT_MIN && rever<INT_MAX){
    return rever;
}
else
{
    return 0;
}

}