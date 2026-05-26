#include <iostream>
using namespace std;

int main()
{

    // (<< insertion operator << and string literal "Hello World!" to print the message to the console. >>)
    // (:: scope resolution operator :: is used to access the cout object from the std namespace without using the using directive.
    // This allows us to avoid potential naming conflicts and makes it clear that we are using the cout object from the standard library.)
    int age = 20;
    float b = 35.1234567;
    double c = 35.12345678901234567;
    char d = 'A';
    string e = "Hello World!";
    bool f = true;

    cout<<sizeof(age)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(f)<<endl;
    
    return 0;
}

