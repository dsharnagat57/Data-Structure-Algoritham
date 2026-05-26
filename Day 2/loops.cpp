#include <iostream>
using namespace std;    

int main(){
    //for loop

    // for (int i = 0; i <= 20; i++)
    // {
    //     cout <<i << endl;
    // }

    // while loop

    //  int i = 1;
    //  while (i<=20){
    //     cout <<i << endl;
    //     i++;
    //  }

    // do while loop
    int i = 1;
    do
    {
        cout <<i << endl;
        i++;
        if (i==10)
        {
            break;
        }
        
    } while (i<=20);
    return 0;
}