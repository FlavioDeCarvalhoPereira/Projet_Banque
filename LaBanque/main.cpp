#include <iostream>
#include "menu.h"
#include "compteBancaire.h"
#include "compteEpargne.h"
using namespace std;

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2 ,
    OPTION_3 ,
    QUITTER ,
};

/*int main()
{
    try {
        float montant;
        int choix;
        Menu leMenu("/home/USERS/ELEVES/SNIR2020/fpereira/Documents/SNIR2/QtCreator/Projet_Banque/LaBanque/compteBancaire.txt");
        CompteBancaire compte(5);

        do {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                cout << "Consultation du solde" << endl;
                cout <<compte.ConsulterSolde()<<endl;
                leMenu.AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "Veuillez indiquer le montant que vous voulez déposer :" << endl;
                cin >> montant;
                compte.Deposer(montant);
                cout << "Vous avez déposé : " <<montant;
                leMenu.AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "Veuillez indiquer le montant que vous voulez retirer :" << endl;
                cin >> montant;
                if(compte.Retirer(montant)==false){
                    cout <<"Solde insufisant pour valider l'opération" <<endl;
                }
                else {
                    cout <<"Vous avez retiré : " <<montant <<endl;
                }
                leMenu.AttendreAppuiTouche();
                break;
            }
        }while(choix != 4);

    } catch (Exception erreur) {
        erreur.ObtenirMessage();
        erreur.ObtenirCodeErreur();
        exit(EXIT_FAILURE);
    }
    return 0;
}*/

int main()
{
    try {
        float montant;
        int choix;
        Menu leMenu("/home/USERS/ELEVES/SNIR2020/fpereira/Documents/SNIR2/QtCreator/Projet_Banque/LaBanque/compteEpargne.txt");
        CompteEpargne compte(5);

        do {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case 1:
                cout << "Consultation du solde" << endl;
                cout <<compte.ConsulterSolde()<<endl;
                leMenu.AttendreAppuiTouche();
                break;
            case 2:
                cout << "Veuillez indiquer le montant que vous voulez déposer :" << endl;
                cin >> montant;
                compte.Deposer(montant);
                cout << "Vous avez déposé : " <<montant;
                leMenu.AttendreAppuiTouche();
                break;
            case 3:
                cout << "Veuillez indiquer le montant que vous voulez retirer :" << endl;
                cin >> montant;
                if(compte.Retirer(montant)==false){
                    cout <<"Solde insufisant pour valider l'opération" <<endl;
                }
                else {
                    cout <<"Vous avez retiré : " <<montant <<endl;
                }
                leMenu.AttendreAppuiTouche();
                break;
            case 4:
                cout <<"Calcul des interets :" << endl;
                compte.CalculerInterets();
                cout << "Votre nouveau solde après calcul des interets :" <<compte.ConsulterSolde() <<endl;
                break;
            }
        }while(choix != 5);

    } catch (Exception erreur) {
        erreur.ObtenirMessage();
        erreur.ObtenirCodeErreur();
        exit(EXIT_FAILURE);
    }
    return 0;
}
