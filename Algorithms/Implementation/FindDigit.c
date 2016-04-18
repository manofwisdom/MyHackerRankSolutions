/*Author: ALok Sharma
https://www.hackerrank.com/challenges/find-digits
Problem Statement:
Given an integer, NN, traverse its digits (dd1,dd2,...,ddn) and determine how many digits evenly divide NN 
(i.e.: count the number of times NN divided by each digit ddi has a remainder of 00).
Print the number of evenly divisible digits.
*/

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
        scanf("%d",&n);
        int number =n;
        int digit, count =0;
        while(n != 0)
            {
            digit = n%10;
            n /= 10;
            if(digit==0) //If one of the digits of the number is a zero, then don't count it and get back to loop condition and continue
                {         //because can't divide by zero and 
                continue;
                }
            else if(number%digit ==0)
                {
                count++;
            }            
        }
        printf("%d\n",count);
    }
    return 0;
}
