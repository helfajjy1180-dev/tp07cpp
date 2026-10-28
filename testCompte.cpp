
#include <iostream>
#include "Compte.cpp"
using namespace std;

int main() {
    CompteBancaire c1;
    CompteBancaire c2(1000);

    cout << "--- Compte 1 ---" << endl;
    c1.afficherSolde();

    cout << endl << "--- Compte 2 ---" << endl;
    c2.afficherSolde();

    cout << endl << "--- Retrait simple ---" << endl;
    c2.retrait(200);
    c2.afficherSolde();

    cout << endl << "--- Retrait securise ---" << endl;
    c2.retrait(300, 1234);
    c2.afficherSolde();

    cout << endl << "--- Code incorrect ---" << endl;
    c2.retrait(100, 9999);
    c2.afficherSolde();

    return 0;
}
