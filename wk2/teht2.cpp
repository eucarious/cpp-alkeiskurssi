#include <iostream>
using namespace std;

int main() {

    int guess;

    cout << "Pelataan Kiinalaista Numeropeliä!" << endl;

    while (true) {
        
        cout << "Anna luku: ";    
        cin >> guess;

        if (guess == 0 ) {
            break;
        }

        cout << "Voitin, minun on " << guess+1 << endl;

    }
    
    return 0;
    
}
