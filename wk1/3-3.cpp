#include <iostream>
#include <string>
using namespace std;

int main() {

    // hemoglobin time
    char gender; 
    cout << "Please enter your sex. (M for male, F for female): ";
    cin >> gender;
    
    int hemoglobin;
    cout << "Please enter your hemoglobin value (g/l): ";
    cin >> hemoglobin;

    if (gender == 'M' || gender == 'm') {

        if (hemoglobin > 167) {
            cout << "Your hemoglobin value is high.";
        } else if (hemoglobin > 133) {
            cout << "Your hemoglobin value is normal.";
        } else {
            cout << "Your hemoglobin value is low.";
        } 
 
    } else if (gender == 'F' || gender == 'f') {

        if (hemoglobin > 155) {
            cout << "Your hemoglobin value is high.";
        } else if (hemoglobin > 116) {
            cout << "Your hemoglobin value is normal.";
        } else {
            cout << "Your hemoglobin value is low.";
        } 

    } else {
        cout << "Cannot be calculated.";
    }

    // not gonna input verify this, sorry.

    return 0;

}
