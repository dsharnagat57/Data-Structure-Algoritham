#include <iostream>
using namespace std;

int main()
{
   // logical operators (used to combine multiple boolean expressions and return a boolean result)    

    int a=20, b=10;
    cout << (a>b && a<b) << endl;
    cout << (a>b || b<a) << endl;
    cout << !(a>b) << endl;
    return 0;
}