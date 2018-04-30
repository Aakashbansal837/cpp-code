#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    char str[1000],str1[1000];
    cin>>n;
    while(n>0)
    {
        cin>>str>>str1;
        int count = 0;
        int a,b;
        a= strlen(str);
        b= strlen(str1);
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<a;j++)
            {
                if (str1[j] == str[i])
                {
                    count+=1;
                    break;
                }
                else {continue;}
            }
        }
        if (count == b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        n-=1;
    }
    return 0;
}
