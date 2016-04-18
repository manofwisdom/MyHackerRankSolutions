#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    char charToPrint ='#';
    int i,j,k,timesToPrint, spaces;
    cin >> timesToPrint;
    spaces = timesToPrint-1;
    for(i =1; i<= timesToPrint; i++)
    {
        for(j =1; j<=spaces; j++)
        {
            cout << " "; // print spaces beginning from n-1 spaces
        }
        spaces--; //since number of spaces decrease as we go down.
        for(k=1; k<= i; k++)
        {
            cout << charToPrint; //print a character and increase upto n as we reach the last row.
        }
        cout << "\n"; //Move to next line now
    }
    return 0;
}

