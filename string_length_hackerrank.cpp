#include<iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    int len = a.size();
    int len1 = b.size();
    cout<<len<<" "<<len1<<endl;
    cout<<a+b<<endl;
    char m = a[0];
    a[0] = b[0];
    b[0]= m;
    cout<<a<<" "<<b;


    return 0;
}
