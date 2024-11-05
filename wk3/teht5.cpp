// write func 'zero' which takes in a pointer to the start of an int array and the number of items in the array. it then sets all the values to 0
// (toka parametri tarvitaan jotta funktio tietää milloin pitää pysähtyä. c++:ssa ei ole array length funktiota. ja tietty jos ei haluta nollata kaikkia alkioita)
#include <iostream>

void zero (int *array, int arraySize) {
    for (int i = 0 ; i < arraySize ; i++) {
        *array = 0;
        array = array + 1;
    }
}

int main() {
    int intArr[5] = {1,2,7,8,9};
    for (int i = 0 ; i < 5 ; i++) {
        std::cout << intArr[i] << std::endl;
    }

    zero(intArr, 5);
    for (int i = 0 ; i < 5 ; i++) {
        std::cout << intArr[i] << std::endl;
    }
    return 0;
}