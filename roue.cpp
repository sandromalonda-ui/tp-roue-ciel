
#include "roue.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructeur par defaut
CRoue::CRoue()
{
    dimension = 15;
    marque = "Inconnue";
    pression = 2.0;
    crevee = false;
}

// Constructeur avec parametres
CRoue::CRoue(int dimension, string marque, float pression)
{
    this->dimension = dimension;
    this->marque = marque;

    if (dimension > 0 && pression >= 0)
    {
        this->pression = pression;
    }
    else
    {
        this->pression = 0;
    }

    crevee = false;
}

// Destructeur
CRoue::~CRoue()
{
}

// Gonfler la roue
void CRoue::gonfler(float quantite)
{
    if (crevee)
    {
        cout << "Impossible : la roue est crevee !" << endl;
    }
    else if (quantite > 0)
    {
        pression += quantite;
        cout << "Roue gonflee avec succes." << endl;
    }
    else
    {
        cout << "Quantite invalide." << endl;
    }
}

// Degonfler la roue
void CRoue::degonfler(float quantite)
{
    if (quantite <= 0)
    {
        cout << "Quantite invalide." << endl;
    }
    else
    {
        pression -= quantite;

        if (pression < 0)
        {
            pression = 0;
        }

        cout << "Pression diminuee." << endl;
    }
}

// Crever la roue
void CRoue::crever()
{
    crevee = true;
    pression = 0;

    cout << "Attention : la roue est crevee !" << endl;
}

// Afficher les informations
void CRoue::afficher() const
{
    cout << fixed << setprecision(2);

    cout << "\n----- INFORMATIONS DE LA ROUE -----" << endl;
    cout << "Dimension : " << dimension << " pouces" << endl;
    cout << "Dimension en cm : " << dimension * 2.54 << " cm" << endl;
    cout << "Marque : " << marque << endl;
    cout << "Pression : " << pression << " bar" << endl;

    if (crevee)
    {
        cout << "Etat : Roue crevee" << endl;
    }
    else
    {
        cout << "Etat : Roue en bon etat" << endl;
    }

    cout << "----------------------------------" << endl;
}

