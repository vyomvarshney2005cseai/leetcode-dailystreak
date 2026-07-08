/*
 * Problem #1108: Defanging an IP Address
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 7/8/2026, 7:44:31 PM
 * Link: https://leetcode.com/problems/defanging-an-ip-address/
 */

char * defangIPaddr(char* address){
    int noofdots=0;
    for(int i=0;address[i]!=0;i++){
        if(address[i]=='.'){
            noofdots++;
        }
    }
    int newsize=strlen(address)+(2*noofdots)+1;
    char* ans=(char*)malloc(sizeof(char)*newsize);
    int k=0;
    for(int i=0;address[i]!=0;i++){
        if(address[i]=='.'){
            ans[k++]='[';
            ans[k++]='.';
            ans[k++]=']';
        }
        else{
            ans[k++]=address[i];
        }
    }
    ans[newsize-1]='\0';
    return ans;
}
