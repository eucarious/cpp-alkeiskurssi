#include <iostream>
#include <string>
using namespace std;

int main() {

    // WOOO LEAP YEARS!! AGAIN...

    int year;
    cout << "Enter a year: ";
    cin >> year;

    // classmate showed me a better way 
    
    if (year % 400 == 0) {
        
        cout << year << " is a leap year!";
        
    }

    if (year % 100 == 0) {

        cout << year << " is not a leap year!";

    }
        

    if (year % 4 == 0){

        cout << year << " is a leap year!";
        
    } else {

        cout << year << " is not a leap year!";
        
    }

    return 0;
    
}
