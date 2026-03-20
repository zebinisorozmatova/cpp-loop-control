#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        if (i == 2) {
            i++;
            continue;
        }
        cout << i << " ";
        i++;
    } while (i <= 4);
    // Output: 1 3 4
}