#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue; // skip even numbers
        cout << i << " ";
    }
    // Output: 1 3 5 7 9
}