#include <iostream>
#include <string>
#include <limits>
#include "clsDate.h"         
#include "clsInputValidate.h" 

using namespace std;

int main()
{
    int Num = 15;
    cout << "1. Is " << Num << " between 10 and 20? "
        << (clsInputValidate::IsNumberBetween(Num, 10, 20) ? "Yes" : "No") << "\n\n";

    cout << "2. Please enter an integer number between 1 and 5:\n";
    int ValidInt = clsInputValidate::ReadIntNumberBetween(1, 5, " Out of range. Try again: ");
    cout << "    Great! You entered: " << ValidInt << "\n\n";

    cout << "3. Please enter a valid double number:\n";
    double ValidDbl = clsInputValidate::ReadDblNumber(" Invalid input. Enter a valid number: ");
    cout << "    You entered double: " << ValidDbl << "\n\n";

    cout << "4. Date Validation Test:\n";
    clsDate DateToTest(15, 8, 2026);
    clsDate StartDate(1, 1, 2026);
    clsDate EndDate(31, 12, 2026);

    if (clsInputValidate::IsValideDate(DateToTest)) {
        cout << "    The date 15/8/2026 is valid.\n";
    }
    else {
        cout << "    The date is invalid.\n";
    }

    if (clsInputValidate::IsDateBetween(DateToTest, StartDate, EndDate)) {
        cout << "    The date 15/8/2026 is WITHIN the range 2026.\n";
    }
    else {
        cout << "    The date is NOT within the range.\n";
    }

    system("pause");
    return 0;
}