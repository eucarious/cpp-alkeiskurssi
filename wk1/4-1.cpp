#include <iostream>
#include <string>
using namespace std;

int main() {

    // divisible by three
    int i = 1;
    while (i <= 1000)
    {

        if(i % 3 == 0){
            cout << i << "\n";
        }

        i++;
    }

    return 0;
    
}
