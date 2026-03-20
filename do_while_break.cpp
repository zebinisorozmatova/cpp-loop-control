#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        if (i == 4) break;
        cout << i << " ";
        i++;
    } while (i <= 5);
    // Output: 1 2 3
}