#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 7) break;
        cout << i << " ";
        i++;
    }
    // Output: 1 2 3 4 5 6
}