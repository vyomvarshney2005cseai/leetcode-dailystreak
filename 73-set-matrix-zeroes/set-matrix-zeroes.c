void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int m=matrixSize;
    int n=*matrixColSize;
    int zeroinr[m];
     for(int i=0;i<m;i++){
     zeroinr[i]=1;
    }
    int zeroinc[n];
    for(int j=0;j<n;j++){
     zeroinc[j]=1; 
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                zeroinr[i]=0;
                zeroinc[j]=0;
            }
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (zeroinr[i]==0){
                matrix[i][j]=0;
            }
        }
         
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (zeroinc[i]==0){
                matrix[j][i]=0;
            }
        }
}
}