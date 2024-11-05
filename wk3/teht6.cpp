// write a program that counts the length of a C char array.
#include <iostream>

int main () {
    int size = 0;
    char mjono[] = "hello";
    char *pointjono = mjono;
    while (true)
    {
        if (*pointjono != NULL) { // should i be concerned about that yellow line? >>;;;
            size++;
            *pointjono++;
        } else {
            break;
        }
    }

    std::cout << size;

}