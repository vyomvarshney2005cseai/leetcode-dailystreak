int cmpc(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;
    
    if (arg1 < arg2) return 1;
    if (arg1 > arg2) return -1;
    return 0;
}
double minPrice(int* prices, int pricesSize, int* discounts, int discountsSize) {
    qsort(prices,pricesSize,sizeof(int),cmpc);
    qsort(discounts,discountsSize,sizeof(int),cmpc);
    int n=pricesSize;
    double prices2[n];
    for(int i=0;i<n;i++){
        prices2[i]=prices[i];

    }
    int m=discountsSize;
    double sum=0;
    if(n>=m){
        for(int i=0;i<m;i++){
            prices2[i]=(prices2[i]*(100-discounts[i]))/100.00000;
        }
        
    }
    if(n<m){
        for(int i=0;i<n;i++){
            prices2[i]=(prices2[i]*(100-discounts[i]))/100.00000;
        }
    }
    for(int j=0;j<n;j++){
            sum+=prices2[j];
        }
        return sum;
    
}