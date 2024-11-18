#include <iostream>

void varaa_taulukko();
void lue_arvot();
void kaanna();
void tulosta_arvot();

int size = 0;
int* taulukko = 0;

void varaa_taulukko () {
    taulukko = new int[size];
}

void lue_arvot () {
    for (int i = 0 ; i < size ; i++)
    {
        std::cout <<  "anna " << i << " jäsenelle arvo" << std::endl;
        std::cin >> taulukko[i];
    }
}

void kaanna() {
    for (int i = 0 ; i < size/2 ; i++)
    {
        int helper = taulukko[size-i-1];
        taulukko[size-1-i] = taulukko[i];
        taulukko[i] = helper;
    }
}

void tulosta_arvot () {
    for (int i = 0 ; i < size ; i++)
    {
        std::cout << "Item " << i << ": " << taulukko[i] << std::endl;
    }
}

int main () {

    std::cout << "What size is the list?";
    std::cin >> size;

    varaa_taulukko();
    lue_arvot();
    //tulosta_arvot(taulukko, size); for debugging
    kaanna();
    //std::cout << std::endl; for debugging
    tulosta_arvot();

    delete[] taulukko;
    return 0;
}
