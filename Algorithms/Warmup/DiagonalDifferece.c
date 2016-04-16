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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    int diag1=0, diag2=0;
    for( int i=0,j=0; i<n, j<n; i++, j++) {
        diag1 += a[i][j]; //For main diagonal, ith and jth both index increase by 1 in each iteration
    }
    for(int i=0, j =n-1; i<n, j>=0; i++, j--) 
        {                       //For second diagonal, ith index increases and jth index decreases in same interation
        diag2 += a[i][j]; 
        //printf("%d\n",diag2);    
    }
    int result = abs(diag1 - diag2);
   /* printf("%d\n",diag1);
    printf("%d\n",diag2); */ //used for debugging 
    printf("%d",result);
        
    
    return 0;
}
