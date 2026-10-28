
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Facture {
private:
    struct Article {
        string nom;
        float prix;
        int quantite;
        float tva;
    };

    vector<Article> articles;

public:
    void ajouterArticle(string nom, float prix) {
        ajouterArticle(nom, prix, 1);
    }

    void ajouterArticle(string nom, float prix, int quantite) {
        ajouterArticle(nom, prix, quantite, 20);
    }

    void ajouterArticle(string nom, float prix, int quantite, float tva) {
        Article a;
        a.nom = nom;
        a.prix = prix;
        a.quantite = quantite;
        a.tva = tva;

        articles.push_back(a);
    }

    void afficherTotal() {
        float total = 0;

        cout << "--- Facture ---" << endl;

        for (int i = 0; i < articles.size(); i++) {
            float montant = articles[i].prix * articles[i].quantite;
            float montantTTC = montant * (1 + articles[i].tva / 100);

            cout << "Article : " << articles[i].nom << endl;
            cout << "Montant TTC : " << montantTTC << " DH" << endl;

            total += montantTTC;
        }

        cout << "Total TTC : " << total << " DH" << endl;
    }
};
