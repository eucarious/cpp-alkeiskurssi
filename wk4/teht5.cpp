#include "teht1-4.cpp"

int main () {
    int size;

    std::cout << "What size is the list?";
    std::cin >> size;

    int* taulukko = varaa_taulukko(size);
    lue_arvot(taulukko, size);
    //tulosta_arvot(taulukko, size); for debugging
    kaanna(taulukko, size);
    //std::cout << std::endl; for debugging
    tulosta_arvot(taulukko, size);

    delete[] taulukko;
    return 0;
}
