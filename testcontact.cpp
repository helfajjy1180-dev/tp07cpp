
#include <iostream>
#include "Contact.cpp"
using namespace std;

int main() {
    Contact c1("Ahmed");
    Contact c2("Sara", "0612345678");
    Contact c3("Youssef", "0678901234", "youssef@gmail.com");

    cout << "--- Contact 1 ---" << endl;
    c1.afficher();

    cout << endl << "--- Contact 2 ---" << endl;
    c2.afficher();

    cout << endl << "--- Contact 3 ---" << endl;
    c3.afficher();

    return 0;
}
