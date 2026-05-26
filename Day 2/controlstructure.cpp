#include <iostream>
using namespace std;

int main()
{
    int age = 18; 

    // if statement
    // // if (age>= 18) {
    //     cout << "you are eligible to vote" << endl;
    // }

    // if-else statement
    // if (age >= 18) {
    //     cout << "you are eligible to vote" << endl;
    // } else {
    //     cout << "you are not eligible to vote" << endl;
    // }

    // else-if ladder statement
    
    //int marks = 0;
    // cout << "enter your marks: " ;
    // cin >> marks;

    // if (marks < 90 && marks >= 95)
    // {
    //     cout << "A+" << endl;
    // }
    // else if (marks < 80 && marks >= 89)
    // {
    //     cout << "A" << endl;
    // }
    // else if (marks < 70 && marks >= 79)
    // {
    //     cout << "B" << endl;
    // }
    // else if (marks < 60 && marks >= 69)
    // {
    //     cout << "C" << endl;
    // }
    // else if (marks < 50 && marks >= 59)
    // {
    //     cout << "D" << endl;
    // }
    // else if (marks >= 45 && marks < 49)
    // {
    //     cout << "E" << endl;
    // }
    // else
    // {
    //     cout << "you are failed" << endl;
    // }

    // switch case statement

    int day;
    cout << "enter the day: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid day";
    }

    return 0;
}
