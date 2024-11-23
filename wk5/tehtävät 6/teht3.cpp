// hey! it's file stuff again :D except no json this time :(
#include <iostream>
#include <fstream>

class Writable {
  public:
  virtual void writeState(const std::string& filename) = 0;
};

class Readable {
  public:
  virtual void readState(const std::string& filename) = 0;
};
// en taida ymmärtää tehtävänantoo taas;;;

class PlayerData : public Writable, public Readable {
  public: // man, i should just use struct.
    std::string _username;
    std::string _playerClass;
    int _level;
    bool _hasAccount;

    PlayerData(std::string username, std::string playerClass, int lvl, bool hasAccount) : _username(username), _playerClass(playerClass), _level(lvl), _hasAccount(hasAccount) {}

    void writeState(const std::string& filename){
      std::ofstream myfile (filename +".txt");
      if (myfile.is_open()) {
        myfile << this->_username << "\n";
        myfile << this->_playerClass << "\n";
        myfile << this->_level << "\n";
        myfile << this->_hasAccount << "\n";
        myfile.close();
      } else {
        std::cout << "could not open file\n";
      }
    }

    void readState(const std::string& filename) {
      std::string line;
      std::ifstream myfile (filename +".txt");
      if (myfile.is_open()) {
        myfile >> this->_username >> this->_playerClass >> this->_level >> this->_hasAccount;
        myfile.close();
      } else {
        std::cout << "could not open file\n";
      }
    }
};

int main () {

  PlayerData billy("Billy", "Warrior", 30, true);
  PlayerData adam("Adam", "Sorcerer", 90, true);

  billy.writeState("billyData");
  adam.writeState("adamData");
  // go into the files!! change the data!! see what happens :D (just remember what var you're changing)
  billy.readState("billyData");

  return 0;
}
