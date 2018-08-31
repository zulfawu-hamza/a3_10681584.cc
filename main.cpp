#include <iostream>

using namespace std;

int main()
{
    string studname;
    int studidnumber;
    char grade;

    cout << "Please enter student name: ";
    cin >> studname;
    cout <<endl;
    cout << "Please enter student ID: ";
    cin >> studidnumber;
    cout <<endl;
    cout << "Please enter your grade: ";
    cin >> grade;
    cout <<endl;

     switch(grade)
    {
        case 'A' : cout << "Incredible" <<endl;
        break;
        case 'B+' : cout << "Excellent" <<endl;
        break;
        case 'B' : cout << "Very good" <<endl;
        break;
        case 'C+': cout << " Good" <<endl;
        break;
        case 'C': cout << "Average" <<endl;
        break;
        case 'D+' : cout << "Below Average" <<endl;
        break;
        case 'D' : cout << "Pass" <<endl;
        break;
        case 'E' : cout << "Credit" <<endl;
        break;
        case 'F' : cout << "Fail" <<endl;
        break;
         default:
         cout << "Invalid Entry" <<endl;
         break;

    }

    return 0;
}
