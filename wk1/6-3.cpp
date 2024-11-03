#include <iostream>
#include <string>
using namespace std;

double GallonsToLitres(double gallons){
    return gallons * 3.7854;
}

int main() {

    double gallons;
    // gallons time! 
    while (true){
        cout << "Gallons to Litres converter" << "\n" << "Enter a negative value to end the program." << "\n";
        cin >> gallons;

        if (gallons < 0) {
            break;
        }

        cout << gallons << " gallons is " << GallonsToLitres(gallons) << " litres." << "\n\n";
    }

    return 0;
    
}
