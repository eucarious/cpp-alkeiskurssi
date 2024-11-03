#include <iostream>
#include <string>
using namespace std;

int main() {

    // tuumat. whatever that means 
    // oh it means inches
    double inch;

    while (true){

        cout << "Input a length (in)." << "\n" << "Enter a negative value to end the program." << "\n";
        cin >> inch;
        
        if (inch < 0){
            break;
        }

        cout << inch << " inches is " << inch * 2.54 << " centimeters." << "\n\n";

    }
    
    return 0;
    
}
