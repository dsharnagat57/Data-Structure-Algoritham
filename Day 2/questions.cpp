#include <iostream>
using namespace std;

int main()
{
    // 1. swap two numbers

    // int a=10, b=20, c=0;
    // c=a;
    // a=b;
    // b=c;

    // cout<< "After Swapping" << endl;
    // cout <<"a=" <<a << endl;
    // cout<< "b=" <<b << endl;

    // 2. Check Even Or Odd

    // int a =4;

    // if (a%2==0)
    // {
    //     cout<< "the number is even" << endl;
    // }
    // else{
    //     cout<< "the number is odd" << endl;
    // }

    // 3.find largest of three numbers

    // int a=10, b=20, c=7;
    // if (a>b && a>c)
    // {
    //     cout<< "a is largest no." << endl;
    // }
    // else if (b>a && b>c)
    // {
    //     cout<< "b is largest no." << endl;
    // }
    
    // else{
    //     cout<< "c is largest no." << endl;
    // }

    //4. multiplication table

    // int a=5;
    // for (int i = 1; i <= 10; i++)
    // {
    //    int b = a*i
    //     cout <<a <<" * " <<i <<" = " <<b << endl;
    // }

    //5. Sum of First N Numbers

    // int n=0, sum=0;
    // cout<<"Enter the No.";
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum +=i;
    // }
    // cout << "Sum of first " << n << " numbers is: " << sum << endl;

    //6. factorial of a number

    int n=0, fact = 1;
     cout<<"Enter the No.";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        fact *=i;
    }
    cout << "factorial of first " << n << " numbers is: " << fact << endl;
    return 0;
}