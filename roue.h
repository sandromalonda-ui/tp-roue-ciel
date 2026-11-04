#ifndef ROUE_H
#define ROUE_H

#include <string>

using namespace std;

class CRoue
{
private:
    int dimension;
    string marque;
    float pression;
    bool crevee;

public:

    // Constructeur par defaut
    CRoue();

    // Constructeur avec parametres
    CRoue(int dimension, string marque, float pression);

    // Destructeur
    ~CRoue();

    // Methodes
    void gonfler(float quantite);
    void degonfler(float quantite);
    void crever();
    void afficher() const;
};

#endif
