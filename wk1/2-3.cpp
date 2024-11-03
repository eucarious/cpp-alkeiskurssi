#include <iostream>
#include <string>
using namespace std;

int main() {

    // kolmion ala? well, sure, I guess.
    double height;
    double width;

    cout << "How tall is the triangle? ";
    cin >> height;
    cout << "How wide is the base of the triangle? ";
    cin >> width;

    cout << "The area of the triangle is ";
    cout << (height*width/2);

    cout << "\n\n";

    // actual assignment
    cout << "How tall is the rectangle? ";
    cin >> height;
    cout << "How wide is the rectangle? ";
    cin >> width;

    cout << "The area of the rectangle is " << (height*width);
    cout << "\n... and the perimeter is " << height*2 + width*2;

    return 0;

}
