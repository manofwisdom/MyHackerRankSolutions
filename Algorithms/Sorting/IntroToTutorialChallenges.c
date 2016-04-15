#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int V, n, i, j=0;
    scanf("%d",&V);
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
        {
        scanf("%d",&arr[i]);
    }
    while(arr[j]!=V)
        {
        j++;
    }
    printf("%d",j);
    
    return 0;
}
