#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 3; j++) {
            if (j == 2) continue;
            cout << i << "-" << j << " ";
        }
    }
    // Output: 1-1 1-3 2-1 2-3
}