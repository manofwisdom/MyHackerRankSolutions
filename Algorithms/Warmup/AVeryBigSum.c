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
    long long int sum =0; 
    /*long long int because The range of the 32-bit integer is (−231) to (231−1) or [−2147483648,2147483647](−231) to (231−1) or [−2147483648,2147483647].*/
    for(int arr_i = 0; arr_i < n; arr_i++){
       sum += arr[arr_i];
    }
    printf("%lld",sum); //%lld is specifier for long long decimal i.e. int numbers
    
    return 0;
}
