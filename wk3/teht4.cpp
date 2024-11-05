// write function "sum" which takes two integers and counts the sum as
// a) pointers
// b) references 
// hm. as in the params are pointers or refs? well. here goes i guess.
#include <iostream>

int sumRef(int &x, int &y) {
    return (x + y);
}

int sumPoint(int *x, int *y){
    return (*x + *y);
}

int main() {

    int x = 10;
    int y = 26;

    std::cout << sumRef(x,y);
    std::cout << std::endl;
    std::cout << sumPoint(&x,&y);

    return 0;
}