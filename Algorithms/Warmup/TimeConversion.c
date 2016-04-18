//Solution inspired from AbhishekVermaIIT's suggestion here https://www.hackerrank.com/challenges/time-conversion/forum

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int hour, minute, second;
    char time12[3]; //for 12 hour time, 3 because AM or PM also contains a null character after "M"
    scanf("%d:%d:%d%s",&hour,&minute,&second,time12);
    //if it's PM and hour is not 12 then increment the time by 12 hours
   if(strcmp(time12,"PM")==0 && hour !=12) //strcmp returns 0 if both strings match
        {
        hour += 12;
    }
    //if it's AM and time is 12, then make hours as 0, since 12:00:00 AM is 00:00:00 in 24 hour format
   if(strcmp(time12,"AM")==0 && hour==12)
       {
       hour =0;
   }
    printf("%02d:%02d:%02d",hour,minute,second); //in %02d, %2 ensures width of 2 i.e. 2 digit and 0 is padded to the left if not 2 digits
    
    return 0;
}

