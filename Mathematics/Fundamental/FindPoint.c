#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, Px, Py, Qx, Qy;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
        {
        scanf("%d%d%d%d",&Px, &Py, &Qx, &Qy);
        int Rx, Ry;
        Rx = 2*Qx -Px;
        Ry = 2*Qy -Py;
        printf("%d %d \n",Rx,Ry);
        
    }
    return 0;
}
