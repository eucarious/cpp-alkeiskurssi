#include <iostream>
#include <vector>

class Vihollistyyppi {
  public:
    int _alku_hp;
    int _alku_hyokkausvoima;
    int _alku_puolustusvoima;
};

class Vihollinen {
  public:
    int _hp;
    Vihollistyyppi* _tyyppi;
};

class Objekti {
  public:
    std::string _nimi;
};

class MuuObjekti : public Objekti {
  public:
    int _kuntovaikutus;
    int _rahavaikutus;
};

class Taisteluvaruste : public Objekti {
  public:
    int _hyokkaysvoima;
    int _puolustusvoima;
};

class Pelihahmo {
  public:
    std::string _nimi;
    int _level;
    int _hp;
    int _gold;
    std::vector<Objekti*> _equipment;

};

class Maastotyyppi {
  public:
    float _liikkumisvaikeus;
    float _taisteluvaikeus;
};

class Maastoruutu {
  public: 
    int _x;
    int _y;
    Maastotyyppi* _tyyppi;
    std::vector<Objekti*> _objektit;
    std::vector<Pelihahmo*> _pelihahmot;
    std::vector<Vihollinen*> _viholliset;
};

class Karttapohja {
  public:
    std::vector<Maastoruutu> _ruudut;
};