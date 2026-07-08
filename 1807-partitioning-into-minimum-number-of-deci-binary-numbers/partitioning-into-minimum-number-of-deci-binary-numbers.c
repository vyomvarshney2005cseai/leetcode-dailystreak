int minPartitions(char* n) {
    int current_digit;
    int max_digit=0;
    for(int i=0;n[i]!='\0';i++){
        current_digit=n[i]-'0';
        if(current_digit==9){
            return 9;
        }
        else{
            if(current_digit>max_digit){
                max_digit=current_digit;
            }
        }
    }
    return max_digit;
}