#include <iostream>
#include "compteclient.h"
#include "comptebancaire.h"
#include "compteepargne.h"
#include "menu.h"

using namespace std;

CompteClient::CompteClient(const string _nom, const int _numero):
    nom(_nom),
    numero(_numero)
{
    unCompteBancaire = new CompteBancaire(0);
    unCompteEpargne = nullptr;
}

CompteClient::~CompteClient()
{
    delete unCompteBancaire;
}

void CompteClient::OuvrirCompteEpargne()
{
    float solde;
    float taux;
    int compteur=0;

    if(compteur < 1)
    {
        cout << "Entrez votre solde de départ : ";
        cin >> solde;
        cout << "Entrez le taux d'interet : ";
        cin >> taux;

        unCompteEpargne = new CompteEpargne(solde);
        unCompteEpargne->ModifierTaux(taux);
        compteur++;
    }
    else{
        cout << "Il existe déjà un compte" << endl;
    }
}

void CompteClient::GererCompteEpargne()
{
    float solde, montantDepo, montantRetrait;
    bool soldeSuffisant = false;
    float gain;

    CompteBancaire compte1(0);

    Menu leMenuEpargne("compteEpargne.txt");
    int choix = leMenuEpargne.Afficher();

    do
    {
        switch(choix){
        case 1:
            solde = unCompteEpargne->ConsulterSolde();
            cout <<"Le solde du compte est : " << solde << endl;
            choix = leMenuEpargne.Afficher();
            break;
        case 2:
            cout << "Entrez le montant à déposer : ";
            cin >> montantDepo;
            unCompteEpargne->Deposer(montantDepo);
            choix = leMenuEpargne.Afficher();
            break;
        case 3:
            cout << "Entrez le montant à retirer : ";
            cin >> montantRetrait;
            soldeSuffisant = unCompteEpargne->Retirer(montantRetrait);
            if(soldeSuffisant == true)
            {
                cout << "Le montant à été retiré" << endl;
            }
            else{
                cout << "Le solde n'est pas suffisant" << endl;
            }
            choix = leMenuEpargne.Afficher();
            break;
        case 4:
            gain = unCompteEpargne->CalculerInterets();
            cout << "Vos gains d'interets sont de : " << gain << endl;
            choix = leMenuEpargne.Afficher();
            break;
        }
    }while(choix != 5);
}

void CompteClient::GererCompteBancaire()
{
    float solde, montantDepo, montantRetrait;
    bool soldeSuffisant = false;

    CompteBancaire compte1(0);

    Menu leMenu("compteBancaire.txt");
    int choix = leMenu.Afficher();

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
}
