#include <iostream>
using namespace std;

int main(){
    //* derefrance operator
    //& Address of operator
    int a = 10;
    int *ptr = &a;
    cout<<"address of a:"<<ptr<<endl;
    cout<<"value at address ptr:"<<*ptr<<endl;

    return 0;
}
