#include <iostream>
using namespace std;

void printTruthTable() {
    // Header
    cout << "Hypothetical Syllogism Truth Table:\n";
    cout << "-----------------------------------\n";
    cout << "P\t|  Q\t|  R\t|  P -> Q\t|  Q -> R\t|  P -> R\n";
    cout << "-----------------------------------\n";

    // Iterate over all possible values of P, Q, and R
    for (int p = 0; p <= 1; ++p) {
        for (int q = 0; q <= 1; ++q) {
            for (int r = 0; r <= 1; ++r) {
                // Calculate P -> Q (Implication)
                bool pImpliesQ = (!p) || q;  // Equivalent to !P || Q

                // Calculate Q -> R (Implication)
                bool qImpliesR = (!q) || r;  // Equivalent to !Q || R

                // Calculate P -> R (Conclusion)
                bool pImpliesR = (!p) || r;  // Equivalent to !P || R

                // Print values of P, Q, R, P -> Q, Q -> R, and P -> R
                cout << p << "\t|  " << q << "\t|  " << r << "\t|    " << pImpliesQ << "\t|    " << qImpliesR << "\t|    " << pImpliesR << "\n";
            }
        }
    }

    cout << "-----------------------------------\n";
}

int main() {
    printTruthTable();
    return 0;
}
