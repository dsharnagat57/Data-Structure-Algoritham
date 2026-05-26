#include <iostream>
using namespace std;

int main()
{

    // uniary operator (works on single operand)
    // 1. increment operator (a++) (Post increment)

    int a = 10;
    cout<< a++ << endl;
    cout<< a << endl;

    // 2. increment operator (++a) (Pre increment)

    
    int b = 10;
    cout<< ++a << endl;
    cout<< a << endl;

    // 3. decrement operator (a--) (Post decrement)

    int c = 10;
    cout<< c-- << endl;
    cout<< c << endl;   

    // 4. decrement operator (--a) (Pre decrement)  

    int d = 10;
    cout<< --d << endl;         
    cout<< d << endl;
    return 0;
}