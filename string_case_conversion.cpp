#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    char c[100];
    int m=c.size();
    cout<<m;
    /*
    int n=(log(m)/log(10))+1;
    for (int i=0;i<n;i++)
    {
        if (c[i]>=65 && c[i]<=91)
        c[i]=c[i]+32;
        else
        c[i]=c[i]-32;
    }
    */

    cout <<c<< endl;
    return 0;
}
