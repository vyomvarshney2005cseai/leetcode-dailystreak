int secondsBetweenTimes(char* startTime, char* endTime) {
    int sth=((startTime[0]-'0')*10)+startTime[1]-'0';
    int stm=((startTime[3]-'0')*10)+startTime[4]-'0';
    int sts=((startTime[6]-'0')*10)+startTime[7]-'0';
    int eth=((endTime[0]-'0')*10)+endTime[1]-'0';
    int etm=((endTime[3]-'0')*10)+endTime[4]-'0';
    int ets=((endTime[6]-'0')*10)+endTime[7]-'0';
    int h=eth-sth;
    if(h<0){
        h=(24-sth)+eth;
    }
    int m=etm-stm;
    if(m<0){
        m=(60-stm)+etm;
        h-=1;
    }
    int s=ets-sts;
    if(s<0){
        s=(60-sts)+ets;
        m-=1;
    }
    return (h*3600)+(m*60)+s;
    

}