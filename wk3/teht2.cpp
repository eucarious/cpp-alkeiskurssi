#include <iostream>

int main () {
    
    int x = 1003;
    int *y = &x;
    std::cout << "the memory slot of y: " << &y << std::endl;
    std::cout << "the memory slot of x: " << &x << std::endl;
    std::cout << "the value of y: " << y << std::endl;
    std::cout << "the value of x: " << x << std::endl;

    return 0;
}