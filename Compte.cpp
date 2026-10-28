
#include <iostream>
using namespace std;

class CompteBancaire {
private:
    double solde;
    int codeSecurite;

public:
    CompteBancaire() {
        solde = 0;
        codeSecurite = 1234;
    }

    CompteBancaire(double s) {
        solde = s;
        codeSecurite = 1234;
    }

    void afficherSolde() {
        cout << "Solde actuel : " << solde << " DH" << endl;
    }

    void retrait(double montant) {
        if (montant <= 0) {
            cout << "Montant invalide !" << endl;
        }
        else if (montant > solde) {
            cout << "Solde insuffisant !" << endl;
        }
        else {
            solde -= montant;
            cout << "Retrait effectue avec succes." << endl;
        }
    }

    void retrait(double montant, int code) {
        if (code != codeSecurite) {
            cout << "Code de securite incorrect !" << endl;
        }
        else if (montant <= 0) {
            cout << "Montant invalide !" << endl;
        }
        else if (montant > solde) {
            cout << "Solde insuffisant !" << endl;
        }
        else {
            solde -= montant;
            cout << "Retrait securise effectue avec succes." << endl;
        }
    }
};
