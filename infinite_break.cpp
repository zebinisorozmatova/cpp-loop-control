#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (true) {
        if (i > 5) break;
        cout << i << " ";
        i++;
    }
    // Output: 1 2 3 4 5
}