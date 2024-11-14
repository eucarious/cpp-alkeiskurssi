#include <string>
#include <iostream>

struct Solmu {
    std::string data;
    Solmu* left = nullptr;
    Solmu* right = nullptr;

    Solmu(std::string data) {
        this->data = data;
    }

    Solmu(std::string data, Solmu* left_child, Solmu* right_child) {
        this->data = data;
        this->left = left_child;
        this->right = right_child;
    }
};

void tulosta(Solmu* s){
    // use recursive functions. recursion. 
    //rekursion kantatapaus
    if (!s)
        return;
    std::cout << s->data << std::endl; // move this below the tulosta calls to go from top to bottom
    tulosta(s->left);
    tulosta(s->right);
}


int main () {

    Solmu G("G");
    Solmu D("D", &G, nullptr);
    Solmu B("B", nullptr, &D);
    Solmu H("H");
    Solmu E("E", nullptr, &H);
    Solmu F("F");
    Solmu C("C", &E, &F);
    Solmu A("A", &B, &C);


    return 0;
}