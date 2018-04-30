#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100],a[100];
    cout<<"enter string: ";
    cin>>a;
    cout<<"string a:"<<a<<endl;
    strcpy(s,a);
    cout<<"string s:"<<s<<endl;
    strrev(a);
    cout<<"reverse of string a: "<<a<<endl;
    int i =0 ,count=0;
    while (s[i] != '\0')
    {
        if (a[i] == s[i]){}
        else
            count+=1;
        i+=1;

    }
    if (count == 0)
        cout<<"yes";
    else
        cout<<"no";


    return 0;
}
