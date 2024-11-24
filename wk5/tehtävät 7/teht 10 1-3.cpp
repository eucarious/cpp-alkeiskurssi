#include <vector>

class Hissi {

  int _nykyinenKerros;
  int _alinKerros;
  int _ylinKerros;

  public:
  Hissi(int alinKerros, int ylinKerros) {
    this->_alinKerros = alinKerros;
    this->_ylinKerros = ylinKerros;

    this->_nykyinenKerros = alinKerros;
  }
  
  void siirryKerrokseen(int kerros) {
    while(_nykyinenKerros != kerros) {
      if (kerros > _nykyinenKerros) {
        kerrosYlos();
      } else if (kerros < _nykyinenKerros) {
        kerrosAlas();
      }
    }
  }

  void kerrosYlos() {
    if (_nykyinenKerros != _ylinKerros) {
      this->_nykyinenKerros += 1;
    }
  }

  void kerrosAlas() {
    if (_nykyinenKerros != _alinKerros) {
      this->_nykyinenKerros -= 1;
    }
  }

  int getAlinKerros() {
    return _alinKerros;
  }
};

class Talo {

  int _alinKerros;
  int _ylinKerros;
  std::vector<Hissi> hissit; 

  public:
  Talo(int alinKerros, int ylinKerros, int hissiMaara){
    this->_alinKerros = alinKerros;
    this->_ylinKerros = ylinKerros;
    for (int i = 0 ; i < hissiMaara ; i++){
      Hissi newHissi(alinKerros, ylinKerros);
      hissit.push_back(newHissi);
    }
  }

  // assuming the user counts from 1
  void ajaHissia(int hissiNo, int kerros){
    hissit.at(hissiNo-1).siirryKerrokseen(kerros);
  }

  void palohalytys() {
    for (int i = 0 ; i < hissit.size() ; i++) {
      hissit.at(i).siirryKerrokseen(hissit.at(i).getAlinKerros());
    }
  }
};

int main () { 

  Hissi h(0, 10);
  h.siirryKerrokseen(5);
  h.siirryKerrokseen(h.getAlinKerros());

  Talo kerrostalo(0, 10, 3);
  kerrostalo.ajaHissia(2, 5);
  kerrostalo.ajaHissia(3, 10);
  kerrostalo.ajaHissia(1, 8);
  kerrostalo.palohalytys();

  return 0;
}