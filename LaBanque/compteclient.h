#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include <string>
#include "comptebancaire.h"
#include "compteepargne.h"
using namespace std;

class CompteClient
{
private:
    string nom;
    int numero;
    CompteBancaire *unCompteBancaire;
    CompteEpargne *unCompteEpargne;
public:
    CompteClient(const string _nom, const int _numero);
    ~CompteClient();
    void OuvrirCompteEpargne();
    void GererCompteEpargne();
    void GererCompteBancaire();
};

#endif // COMPTECLIENT_H
