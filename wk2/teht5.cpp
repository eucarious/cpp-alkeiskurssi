#include <iostream>
using namespace std;

int main() {

    int guess, random, attempts = 0;
    int minimum, maximum;
    cout << "Määritellään arvauspelin arvot!" << endl << "Anna lukujen maksimi: ";
    cin >> maximum;
    cout << "Anna lukujen minimi: ";
    cin >> minimum;

    if (minimum >= maximum) {
        cout << ">:(" << endl << "Minimin pitäisi olla pienempi kuin maksimi." << endl;
        cout << "No. Pelataan silti." << endl;
        random = minimum;
        minimum = maximum;
        maximum = random;
    }

    srand(time(0)); // actually randomize the number each time you run the exe
    random = rand() % minimum + (maximum - minimum); // generates the same number without srand

    while (true) {
        
        cout << "Arvaa luku (" << minimum << "-" << maximum << "): ";    
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
