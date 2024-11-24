#include <iostream>

class Julkaisu {
  
  protected:
    std::string _nimi;
  
  public:
    Julkaisu(std::string nimi) : _nimi(nimi) {}

    virtual void tulostaTiedot() {
      std::cout << "Julkaisun nimi: " << this->_nimi << "\n";
    };
};


class Kirja : public Julkaisu {
  
  std::string _kirjailija;
  int _sivumaara;

  public:
    Kirja(std::string nimi, std::string kirjailija, int sivumaara) : Julkaisu(nimi), _kirjailija(kirjailija), _sivumaara(sivumaara) {}

    void tulostaTiedot() {
      std::cout << "Kirjan nimi: " << this->_nimi << "\n";
      std::cout << "Kirjailija: " << this->_kirjailija << "\n";
      std::cout << "Sivumäärä: " << this->_sivumaara << "\n";
    };

};

class Lehti : public Julkaisu {
  std::string _paatoimittaja;

  public:
    Lehti(std::string nimi, std::string paatoimittaja) : Julkaisu(nimi), _paatoimittaja(paatoimittaja) {}

    void tulostaTiedot() {
      std::cout << "Lehden nimi: " << this->_nimi << "\n";
      std::cout << "Päätoimittaja: " << this->_paatoimittaja << "\n";
    };
};


int main () {

  Kirja HyttiNo6("Hytti n:o 6", "Rosa Liksom", 200);
  Lehti AkuAnkka("Aku Ankka", "Aki Hyyppä");

  HyttiNo6.tulostaTiedot();
  std::cout << "\n";

  AkuAnkka.tulostaTiedot();
  std::cout << "\n";

  Julkaisu *CompartmentNo6 = new Kirja ("Compartment Number 6", "Rosa Liksom (Translated by: Lola Rogers)", 200);
  CompartmentNo6->tulostaTiedot();
  std::cout << "\n";

  return 0;
}

