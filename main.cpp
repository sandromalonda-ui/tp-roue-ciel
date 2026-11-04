
#include <iostream>
#include "roue.h"

using namespace std;

int main()
{
    // Creation d'une roue avec le constructeur par defaut
    CRoue roue1;

    cout << "=== ROUE 1 : CONSTRUCTEUR PAR DEFAUT ===" << endl;
    roue1.afficher();

    // Creation d'une roue avec le constructeur parametre
    CRoue roue2(16, "Michelin", 2.2f);

    cout << "\n=== ROUE 2 : CONSTRUCTEUR AVEC PARAMETRES ===" << endl;
    roue2.afficher();

    // Gonfler la roue
    cout << "\n=== GONFLAGE ===" << endl;
    roue2.gonfler(0.5f);
    roue2.afficher();

    // Degonfler la roue
    cout << "\n=== DEGONFLAGE ===" << endl;
    roue2.degonfler(0.3f);
    roue2.afficher();

    // Crever la roue
    cout << "\n=== CREVAISON ===" << endl;
    roue2.crever();
    roue2.afficher();

    // Tentative de gonflage apres crevaison
    cout << "\n=== NOUVELLE TENTATIVE DE GONFLAGE ===" << endl;
    roue2.gonfler(1.0f);

    cout << "\nFin du programme." << endl;

    return 0;
}

