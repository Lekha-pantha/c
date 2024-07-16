#include <iostream>
using namespace std;

void printTruthTable() {
    // Header
    cout << "Modulus One's Complement Truth Table (n=4):\n";
    cout << "------------------------------------------\n";
    cout << "x (decimal)\t|  x (binary)\t|  x % 16\n";
    cout << "------------------------------------------\n";

    // Iterate over all possible 4-bit numbers (0 to 15)
    for (int x = 0; x <= 15; ++x) {
        // Calculate x % 16 using bitwise operations
        int result = x & 15;  // 15 is (1 << 4) - 1

        // Print decimal, binary, and result
        cout << x << "\t\t|  ";
        for (int i = 3; i >= 0; --i) {
            cout << ((x >> i) & 1);
        }
        cout << "\t|  " << result << "\n";
    }

    cout << "------------------------------------------\n";
}

int main() {
    printTruthTable();
    return 0;
}
