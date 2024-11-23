#include <stdio.h>
#include <thread>
#include <chrono>

// writing the nastiest code on earth, one line at a time.

class Viisari 
{
    private:
    int value;
    int max;

    public:

    Viisari() {
        this->value = 0;
        this->max = 0;
    }

    Viisari(int input) {
        this->value = input;
        this->max = 0;
    }

    Viisari(int input, int maxVal) {
        this->value = input;
        this->max = maxVal;
    }
    
    bool etene() {
        this->value = this->value + 1;

        if (this->value == this->max){
            this->value = 0;
            return true;
        } 

        return false;
    }

    bool etene(bool input) {
        if (input) {
            this->value = this->value + 1;
            
            if (this->value == this->max){
                this->value = 0;
                return true;
            } 
        }
        return false;
    }

    void nayta() const{
    printf("%02d", this->value);
    };
    
    void setValue(int input){
        this->value = input;
    } 

    int getValue() const{
        return this->value;
    } 

    ~Viisari(){}
};


class Kello
{
    private:
    Viisari *tunnit;
    Viisari *minuutit;
    Viisari *sekunnit;
    
    public:
    // luodaan ja alustetaan viisarit
    Kello(int h, int m, int s){
        tunnit = new Viisari(h, 24);
        minuutit = new Viisari(m, 60);
        sekunnit = new Viisari(s, 60);
    }

    Kello(int h, int h_max, int m, int m_max, int s, int s_max){
        tunnit = new Viisari(h, h_max);
        minuutit = new Viisari(m, m_max);
        sekunnit = new Viisari(s, s_max);
    }

    ~Kello(){
        delete tunnit;
        delete minuutit;
        delete sekunnit;
    }

    void nayta () {
        tunnit->nayta();
        printf(":");
        minuutit->nayta();
        printf(":");
        sekunnit->nayta();
        printf("\n");
    }

    void kay (){
        sekunnit->setValue(sekunnit->getValue()+1);
        if (sekunnit->getValue() >= 60)
        {
            sekunnit->setValue(0);
            minuutit->setValue(minuutit->getValue()+1);
        }
        if (minuutit->getValue() >= 60){
            minuutit->setValue(0);
            tunnit->setValue(tunnit->getValue()+1);
        }
        if (tunnit->getValue() >= 24){
            tunnit->setValue(0);
        }
    };

     void kayAlt(){
        tunnit->etene(minuutit->etene(sekunnit->etene()));
    };
};


int main () {

    using namespace std::chrono_literals;
    Kello clock(22, 59, 56);
    clock.nayta();
    
    for (int i = 0 ; i < 60 ; i++)
    {
        clock.kayAlt();
        clock.nayta();
        std::this_thread::sleep_for(1000ms);
        
    }

    return 0;
}