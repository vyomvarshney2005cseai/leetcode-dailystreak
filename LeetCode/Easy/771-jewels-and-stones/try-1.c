/*
 * Problem #771: Jewels and Stones
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/22/2026, 4:58:48 PM
 * Link: https://leetcode.com/problems/jewels-and-stones/
 */

int numJewelsInStones(char* jewels, char* stones) {
    int jl=strlen(jewels);
    int sl=strlen(stones);
    char jhash[123];
    char shash[123];
    for(int i=0;i<123;i++){
        jhash[i]=0;
        shash[i]=0;
    }
    for(int i=0;i<jl;i++){
        jhash[jewels[i]]=1;
    }
    for(int i=0;i<sl;i++){
        shash[stones[i]]++;
    }
    int c=0;
    for(int i=0;i<123;i++){
        if(jhash[i]==1 && shash[i]>=1){
            c+=shash[i];
        }
    }
    return c;
}
