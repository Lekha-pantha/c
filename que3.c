#include <iostream>
using namespace std;

void printTruthTable() {
    // Header
    cout << "Modus Tollens Truth Table:\n";
    cout << "---------------------------\n";
    cout << "P\t|  Q\t|  P -> Q\t|  ~Q\t|  ~P (Conclusion)\n";
    cout << "---------------------------\n";

    // Iterate over all possible values of P and Q
    for (int p = 0; p <= 1; ++p) {
        for (int q = 0; q <= 1; ++q) {
            // Calculate P -> Q (Implication)
            bool pImpliesQ = (!p) || q;  // Equivalent to !P || Q

            // Calculate ~Q (Negation of Q)
            bool notQ = !q;

            // Calculate Conclusion: ~P (Negation of P)
            bool notP = !p;

            // Print values of P, Q, P -> Q, ~Q, and Conclusion
            cout << p << "\t|  " << q << "\t|    " << pImpliesQ << "\t|   " << notQ << "\t|       " << notP << "\n";
        }
    }

    cout << "---------------------------\n";
}

int main() {
    printTruthTable();
    return 0;
}
