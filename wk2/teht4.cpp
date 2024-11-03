#include <iostream>
using namespace std;

int main() {

    int guess, random, attempts = 0;

    srand(time(0)); // actually randomize the number each time you run the exe
    random = rand() % 100 + 1; // generates the same number without srand

    while (true) {
        
        cout << "Arvaa luku (1-100): ";    
        cin >> guess;
        
        if (guess == random) {
            attempts++;
            cout << "Oikein! Teit " << attempts << " arvausta.";
            break;
        }

        if (guess < random ) {
            cout << "Liian pieni!" << endl;
        } else {
            cout << "Liian suuri!" << endl;
        }

        attempts++;
    
    }
    
    return 0;
    
}
