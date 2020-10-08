#include <iostream>
#include "menu.h"
#include "comptebancaire.h"
#include "compteepargne.h"
#include "compteclient.h"

using namespace std;

int main()
{
    try {

        float solde, montantDepo, montantRetrait;
        bool soldeSuffisant = false;

        CompteBancaire compte1(0);

        Menu leMenu("client.txt");
        int choix = leMenu.Afficher();

        //Menu 1
        /*
        do
        {
            switch(choix){
            case 1:
                solde = compte1.ConsulterSolde();
                cout <<"Le solde du compte est : " << solde << endl;
                choix = leMenu.Afficher();
                break;
            case 2:
                cout << "Entrez le montant à déposer : ";
                cin >> montantDepo;
                compte1.Deposer(montantDepo);
                choix = leMenu.Afficher();
                break;
            case 3:
                cout << "Entrez le montant à retirer : ";
                cin >> montantRetrait;
                soldeSuffisant = compte1.Retirer(montantRetrait);
                if(soldeSuffisant == true)
                {
                    cout << "Le montant à été retiré" << endl;
                }
                else{
                    cout << "Le solde n'est pas suffisant" << endl;
                }
                choix = leMenu.Afficher();
                break;
            }
        }while(choix != 4);
        */

        //Menu2
        /*
        CompteEpargne compte2(0);
        compte2.ModifierTaux(5);
        float gain;

        do
        {
            switch(choix){
            case 1:
                solde = compte2.ConsulterSolde();
                cout <<"Le solde du compte est : " << solde << endl;
                choix = leMenu.Afficher();
                break;
            case 2:
                cout << "Entrez le montant à déposer : ";
                cin >> montantDepo;
                compte2.Deposer(montantDepo);
                choix = leMenu.Afficher();
                break;
            case 3:
                cout << "Entrez le montant à retirer : ";
                cin >> montantRetrait;
                soldeSuffisant = compte2.Retirer(montantRetrait);
                if(soldeSuffisant == true)
                {
                    cout << "Le montant à été retiré" << endl;
                }
                else{
                    cout << "Le solde n'est pas suffisant" << endl;
                }
                choix = leMenu.Afficher();
                break;
            case 4:
                gain = compte2.CalculerInterets();
                cout << "Vos gains d'interets sont de : " << gain << endl;
                choix = leMenu.Afficher();
                break;
            }
        }while(choix != 5);
    }
    catch(Exception const &exp){
        cout << "Erreur " << exp.ObtenirCodeErreur() << endl;
        cout << exp.ObtenirMessage() << endl;
        exit (EXIT_FAILURE);
    }
    */


        CompteClient unCompteClient("Albert", 1);

        do
        {
            switch(choix){
            case 1:
                unCompteClient.OuvrirCompteEpargne();
                choix = leMenu.Afficher();
                break;
            case 2:
                unCompteClient.GererCompteBancaire();
                choix = leMenu.Afficher();
                break;
            case 3:
                unCompteClient.OuvrirCompteEpargne();
                choix = leMenu.Afficher();
                break;
            }
        }while(choix != 4);
    }
    catch(Exception const &exp){
        cout << "Erreur " << exp.ObtenirCodeErreur() << endl;
        cout << exp.ObtenirMessage() << endl;
        exit (EXIT_FAILURE);
    }

    return 0;
}
