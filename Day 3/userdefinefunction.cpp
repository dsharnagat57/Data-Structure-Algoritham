#include <iostream>
using namespace std;


// void greet(string name){
//     cout<<"hello "<< name;
// }

// int fun1(int x, int y){
//     return x + y;
// }
// int main()
// {
//     // greet("Dushyant");
//     // greet("Roshan");
//     cout<<fun1(5, 10) << endl;
//     return 0;
// }

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int multi(int a, int b){
    return a * b;
}

int divi(int a, int b){
    return a / b;
}

int rem(int a, int b){
    return a % b;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";  
    cin >> a ;
    cin >> b;
    cout<<"Addition:" << add(a, b) << endl;
    cout << "Subtraction:" << sub(a, b) << endl;
    cout << "Multiplication:" << multi(a, b) << endl;
    cout << "Division:" << divi(a, b) << endl;
    cout << "Remainder:" << rem(a, b) << endl;    
    return 0;
}