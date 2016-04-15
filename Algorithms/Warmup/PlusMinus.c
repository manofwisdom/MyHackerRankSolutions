#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    double posf =0.0, negf =0.0, zerof=0.0;
    for(int arr_i = 0; arr_i < n; arr_i++){
        if(arr[arr_i]>0)
            posf++;
        else if(arr[arr_i]<0)
            negf++;
        else
            zerof++;
    }
    printf("%f\n%f\n%f\n",posf/n,negf/n,zerof/n);
    
    return 0;
}
