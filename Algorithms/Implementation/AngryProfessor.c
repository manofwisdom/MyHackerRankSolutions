#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        int a[n];
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }
        int onTime=0;
        for(int a_j =0; a_j < n; a_j++)
            {
            if(a[a_j] <= 0)
                {
                onTime++;
            }
        }
        if(k <= onTime)
            printf("NO\n");
        else
            printf("YES\n");
        
    }
    return 0;
}
