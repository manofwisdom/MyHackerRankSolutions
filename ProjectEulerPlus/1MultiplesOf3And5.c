//This is incomplete and inefficient as of now.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, T, i;
    scanf("%d",&T);
    while(T)
        {
        int sum=0;
        scanf("%d",&N);
        for(i =0; i<N; i++)
            {
            if(((i%3==0)||(i%5==0))&&!((i%3==0)&&(i%5==0)))
               {
                   sum += i;
               }
        }
        printf("%d\n",sum);
        T--;
    }
    return 0;
}
