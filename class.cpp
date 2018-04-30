
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    void set_age (int x){cout<<x;}
    void set_standard (int y){cout<<y;}
    void set_first_name(string s){cout<<s;}
    void set_last_name(string t){cout<<t;}

    int get_age (){cin>>age;return age;}
    int get_standard (){cin>>standard;return standard;}
    string get_first_name(){cin>>first_name;return first_name;}
    string get_last_name(){cin>>last_name;return last_name;}
    char to_string(){
        char s[4];
        s[0] = age;
        s[1] = first_name;
        s[2] = last_name;
        s[3] = standard;
        }

};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
