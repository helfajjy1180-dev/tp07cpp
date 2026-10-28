
#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    Contact(string n) {
        nom = n;
        telephone = "Non disponible";
        email = "Non disponible";
    }

    Contact(string n, string t) {
        nom = n;
        telephone = t;
        email = "Non disponible";
    }

    Contact(string n, string t, string e) {
        nom = n;
        telephone = t;
        email = e;
    }

    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Telephone : " << telephone << endl;
        cout << "Email : " << email << endl;
    }
};
