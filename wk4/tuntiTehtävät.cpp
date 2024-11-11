#include <iostream>

struct Solmu
{
    int data;
    Solmu* next;
};

void tulosta_lista(Solmu* alku) {
    Solmu* current = alku;

    while (current)
    {
        std::cout << current->data << std::endl;      
        current = current->next;
    }
    
}

bool etsi(Solmu* alku, int arvo) {
    Solmu* current = alku;

    while (current)
    {
        if (current->data == arvo)
            return true;
        current = current->next;
    }
    return false;
}


Solmu* lisaa_alkuun(Solmu* alku, int arvo){
    Solmu* uusiSolmu = new Solmu;
    uusiSolmu->data = arvo;
    uusiSolmu->next = alku;

    return uusiSolmu;
}


void tuhoa_lista(Solmu* alku){
    Solmu* current = alku;

    while (current)
    {
        Solmu* next = current->next;
        delete current;
        current = next;
    }
}

int main () {

    Solmu* s4 = new Solmu;
    s4->data = 1; 
    s4->next =nullptr;
 
    Solmu* s3 = new Solmu;
    s3->data = 2; 
    s3->next = s4;
 
    Solmu* s2 = new Solmu;
    s2->data = 10; 
    s2->next = s3;
 
    Solmu* s1 = new Solmu;
    s1->data = 3; 
    s1->next = s2;
 
    Solmu* head = s1;   

    tulosta_lista(head);
    head = lisaa_alkuun(s1, 20);
    std::cout << std::endl;
    tulosta_lista(head);

    std::cout << std::endl;

    std::cout << etsi(head, 20) << std::endl;
    std::cout << etsi(head, 21) << std::endl;
    
    tuhoa_lista(head);

    return 0;
}