#include <iostream>
using namespace std;

int main()
{
    // 07 reverse a number
    // int num, rev = 0, rem;
    // cout << "Enter a number: ";
    // cin >> num;
    // while (num > 0)
    // {
    //     rem = num % 10;
    //     rev = rev * 10 + rem;
    //     num = num / 10;
    // }
    // cout << "Reversed number: " << rev;

// 08 palindrome number
    // int num, rev = 0, rem, temp; 
    // cout << "Enter a number: ";
    // cin >> num;
    // temp = num;
    // while (num > 0)
    // {
    //     rem = num % 10;
    //     rev = rev * 10 + rem;
    //     num = num / 10;
    // }
    // if (temp == rev)
    //     cout << temp << " it is a palindrome number.";
    // else
    //     cout << temp << " it is not a palindrome number.";  

    //09 armstrong number
    // int num, rem, temp, sum = 0;
    // cout << "Enter a number: "; 
    // cin >> num;
    // temp = num;
    // while (num > 0) 
    // {
    //     rem = num % 10;
    //     sum = sum + rem * rem * rem;
    //     num = num / 10;
    // }
    // if (temp == sum){
    //     cout << temp << " it is an armstrong number.";}
    // else{
    //     cout << temp << " it is not an armstrong number.";}

    //10 Prime number check
    int num, cnt = 1, i;
    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i <= num; i++){
     if (num % i == 0)
            {
                cnt++;
            }
    }
   
      if (cnt == 2)
      {
          cout << num << " it is a prime number.";
      }
      else
      {
          cout << num << " it is not a prime number.";
      }


    return 0;
}