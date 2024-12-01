#include <iostream>

template <typename T> class Stack
{
  private:
    T* _list;
    int _maxSize;
    int _filledSlots = 0;

  public:

    Stack (int size) {
      _maxSize = size;
      _list = new T[size];
    }

    void push (T item) {
      if (_filledSlots < _maxSize) {
        _list[_filledSlots] = item;
        _filledSlots++;
      } else {
        std::cout << "Unable to push: Stack full.\n";
      }
    }
    
    T pop () {
      _filledSlots--;
      return _list[_filledSlots];
    } // NOT gonna try to catch errors with going over on this one. 

    int size () {
      return _filledSlots;
    }
};

int main () {

  Stack<int> bigOlList(10);

  bigOlList.push(10);
  bigOlList.push(1009);
  bigOlList.push(27);
  bigOlList.pop();
  std::cout << bigOlList.size() << "\n";

  Stack<std::string> bigOlStrings(3);
  bigOlStrings.push("Hey! Hey!!");
  bigOlStrings.push("Look at me, ma!");
  bigOlStrings.push("I'm holding strings!");
  bigOlStrings.push("Except this one! This is too many strings");
  std::cout << bigOlStrings.size() << "\n";
  bigOlStrings.pop();
  bigOlStrings.pop();
  bigOlStrings.pop();
  std::cout << bigOlStrings.size() << "\n";

  Stack<char> bigOlChars (8);
  bigOlChars.push('3');
  bigOlChars.push('<');
  bigOlChars.push(' ');
  bigOlChars.push('!');
  bigOlChars.push('E');
  bigOlChars.push('N');
  bigOlChars.push('O');
  bigOlChars.push('D');
  for (int i = 0 ; i < 8 ; i ++){
    std::cout << bigOlChars.pop();
  }
  
  return 0;
}