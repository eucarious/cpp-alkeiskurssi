#include <iostream>

int* varaa_taulukko (int n) {
    int *first = new int[n];
    return first;
}

void lue_arvot (int* t, int n) {
    // en ymmärrä tehtävänantoo ;;;
    for (int i = 0 ; i < n ; i++)
    {
        std::cout <<  "anna " << i << " jäsenelle arvo" << std::endl;
        std::cin >> t[i];
    }
}

void kaanna(int* t, int n) {
    int half = n/2;
    for (int i = 0 ; i < half ; i++)
    {
        int helper = t[(n-i-1)];
        t[n-1-i] = t[i];
        t[i] = helper;
    }
}

void tulosta_arvot (const int* t, int n) {
    for (int i = 0 ; i < n ; i++)
    {
        std::cout << "Item " << i << ": " << t[i] << std::endl;
    }
}

