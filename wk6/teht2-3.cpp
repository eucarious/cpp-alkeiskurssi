#include <iostream>

class Honse {
// neighhhhh
  public:
  int _weight; // sorry teach im way too lazy to make anything proper. it's just gonna be comparing ints

  Honse(){
    this->_weight = 0;
  }

  Honse(int weight) {
    this->_weight = weight;
  }

  bool operator<(Honse &comparable) {
    
    return (this->_weight < comparable._weight);
  }

};

template <typename T> void Sort(T arr[], int size) //lord have mercy.
{
  T helper;

  for (int j = 0 ; j < size-1 ; j++ ) {
    for (int i = 0 ; i < size-j-1 ; i++){
      if (arr[i] < arr[i+1]) {
      } else {
        helper = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = helper;
      }
    }
  }
} 

int main () { 

  int bingo[] = {10, 80, 1, 2, 5, 8, 40};

  std::cout << "Unsorted int array\n";
  for (int i = 0 ; i < 7 ; i++){
    std::cout << bingo[i] << " ";
  }
  std::cout << "\n\n";

  Sort(bingo, 7);

  std::cout << "Sorted int array\n";
  for (int i = 0 ; i < 7 ; i++){
    std::cout << bingo[i] << " ";
  }
  std::cout << "\n\n";


  double dingo[] = {10.8, 8.2, .1, 22.7, 5.3, 8.01, 40};
  std::cout << "Unsorted double array\n";
  for (int i = 0 ; i < 7 ; i++){
    std::cout << dingo[i] << " ";
  }
  std::cout << "\n\n";

  Sort(dingo, 7);

  std::cout << "Sorted double array\n";
  for (int i = 0 ; i < 7 ; i++){
    std::cout << dingo[i] << " ";
  }
  std::cout << "\n\n";

  Honse peggy(10), arthur(7), billy(30), poppy(4);
  Honse theHonses[] = {peggy, arthur, billy, poppy};

  std::cout << "Unsorted horses array\n";
  for (int i = 0 ; i < 4 ; i++){
    std::cout << theHonses[i]._weight << " ";
  }
  std::cout << "\n\n";

  Sort(theHonses,4);

  std::cout << "Sorted horses array\n";
  for (int i = 0 ; i < 4 ; i++){
    std::cout << theHonses[i]._weight << " ";
  }
  std::cout << "\n\n";


  return 0;
}