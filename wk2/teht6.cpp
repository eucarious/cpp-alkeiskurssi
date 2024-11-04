#include <iostream>
using namespace std;

int RandomBetween(int *min, int *max) {

    if (*min > *max) {
        cout << ">:(" << endl << "Minimin pitäisi olla pienempi kuin maksimi." << endl;
        cout << "No. Pelataan silti." << endl;
        int helper = *min;
        *min = *max;
        *max = helper;
    }
    
    if (*min == *max)
    {
        cout << "Hei >:(( älä tee noin!!" << endl << "Mä päätän sit." << endl;
        *min = 1;
        *max = 100000;
    }
    
    srand(time(0));
    return (rand() % (*max - *min) + *min);
};

int ValidateGuess(int min, int max) {
    int guess;
    cout << "Arvaa luku (" << min << "-" << max << "): ";    
    cin >> guess;
    while (guess > max || guess < min) {
        cout << "Arvaus ei ole halutulta väliltä. Koita uudelleen." << endl;
        cout << "Arvaa luku (" << min << "-" << max << "): ";    
        cin >> guess;
    }
    return guess;
};

bool CheckGuess(int guess, int answer, int *attempts) {
     
        if (guess == answer) {
            *attempts = *attempts + 1;
            cout << "Oikein! Teit " << *attempts << " arvausta.";
            return false;
        }

        if (guess < answer ) {
            cout << "Liian pieni!" << endl;
            *attempts = *attempts + 1;
        } else {
            cout << "Liian suuri!" << endl;
            *attempts = *attempts + 1;
        }
        return true;
};



int main() {

    int random, attempts = 0;
    int minimum, maximum;
    bool running = true;
    cout << "Määritellään arvauspelin arvot!" << endl << "Anna lukujen maksimi: ";
    cin >> maximum;
    cout << "Anna lukujen minimi: ";
    cin >> minimum;

    random = RandomBetween(&minimum, &maximum);

    while (running) {
        
        running = CheckGuess(ValidateGuess(minimum, maximum), random, &attempts);
       
    }
    
    return 0;
    
}
