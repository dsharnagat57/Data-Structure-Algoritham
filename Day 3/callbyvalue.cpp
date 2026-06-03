#include <iostream>
using namespace std;

int change(int x){
    x = 10;
    cout << "Value of x inside function: " << x << endl;
}

int main()
{
    int a=0;
    change(a);
    cout << "Value of a inside main: " << a << endl; 
    return 0;
}