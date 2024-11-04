#include <iostream>
#include <string>
using namespace std;

int main() {

    // WOOO LEAP YEARS!! AGAIN...

    int year;
    cout << "Enter a year: ";
    cin >> year;

     // ENDLESS NESTED IF STATEMENTS LET'S GOOOO
    if (year % 4 == 0){

        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year!";
            } else {
                cout << year << " is not a leap year!";
            }
        } else {
            cout << year << " is a leap year!";
        }

    } else {

        cout << year << " is not a leap year!";
        
    }

    return 0;
    
}
