#include <iostream>
using namespace std;




int y = 10; //golbal variable (lowest priority)

int main() {
    
   int x= 20; //local variable (highest priority)
   cout << ::y << endl;
    
    return 0;
}