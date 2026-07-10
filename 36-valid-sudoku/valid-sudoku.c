bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    bool ans=true;
    for(int i=0;i<9;i++){
        int hash[9]={0};
        for(int j=0;j<9;j++){
             if(board[i][j]>='1' && board[i][j]<='9'){
                hash[board[i][j]-'1']++;
                if(hash[board[i][j]-'1']==2){
                    return false;
                }
             }
        }
    }
    for(int i=0;i<9;i++){
        int hash1[9]={0};
        for(int j=0;j<9;j++){
             if(board[j][i]>='1' && board[j][i]<='9'){
                hash1[board[j][i]-'1']++;
                if(hash1[board[j][i]-'1']==2){
                    return false;
                }
             }
        }
    }
    
    int hash2[9]={0};   
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash2[board[i][j]-'1']++;
                if(hash2[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    int hash3[9]={0};
    for(int i=3;i<6;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash3[board[i][j]-'1']++;
                if(hash3[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    int hash4[9]={0};
    for(int i=6;i<9;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash4[board[i][j]-'1']++;
                if(hash4[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    int hash5[9]={0};   
    for(int i=0;i<3;i++){
        for(int j=3;j<6;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash5[board[i][j]-'1']++;
                if(hash5[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    int hash6[9]={0};   
    for(int i=0;i<3;i++){
        for(int j=6;j<9;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash6[board[i][j]-'1']++;
                if(hash6[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    int hash7[9]={0};   
    for(int i=3;i<6;i++){
        for(int j=3;j<6;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash7[board[i][j]-'1']++;
                if(hash7[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    int hash8[9]={0};   
    for(int i=3;i<6;i++){
        for(int j=6;j<9;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash8[board[i][j]-'1']++;
                if(hash8[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    int hash9[9]={0};   
    for(int i=6;i<9;i++){
        for(int j=3;j<6;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash9[board[i][j]-'1']++;
                if(hash9[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    int hash10[9]={0};   
    for(int i=6;i<9;i++){
        for(int j=6;j<9;j++){
            if(board[i][j]>='1' && board[i][j]<='9'){
                hash10[board[i][j]-'1']++;
                if(hash10[board[i][j]-'1']==2){
                    return false;
                }
            }
        }
    }
    
    return ans;
}