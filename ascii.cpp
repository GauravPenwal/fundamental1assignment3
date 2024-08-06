#include <iostream>
using namespace std;

int main() {
    char ch = 'a'; // Starting with the first alphabet
    while (ch <= 'z') { // Loop until the last alphabet
        cout<< ch << " = " << int(ch) << endl;
        ch++;
    }
    return 0;
}
