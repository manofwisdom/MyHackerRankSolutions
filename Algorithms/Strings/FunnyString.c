#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,T;
    char S[10000], R[10000];
    scanf("%d",&T);
    for(i=0; i<T; i++)
        {
        scanf("%s",S);
        int len = strlen(S);
        int j, k,x;
        for(j= len-1, k=0; j >=0, k<len; j--, k++)
            {
                R[k] = S[j];
            }
        int flag =1;
        for(x =1; x<len; x++) //Since we've to check for i=1 to i = len
            {
                if( abs(S[x]- S[x-1]) != abs(R[x] - R[x-1]))
                    {
                    flag =0;
                    break;
                }
        }
        if(flag)
            {printf("Funny\n");
            }
        else
            {
            printf("Not Funny\n");
        }
            
    }
    return 0;
}
