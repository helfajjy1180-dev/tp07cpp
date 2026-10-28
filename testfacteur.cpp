
#include <iostream>
#include "Factur.cpp"
using namespace std;

int main() {
    Facture f;

    f.ajouterArticle("Stylo", 5);
    f.ajouterArticle("Cahier", 20, 3);
    f.ajouterArticle("Ordinateur", 5000, 1, 20);

    f.afficherTotal();

    return 0;
}
