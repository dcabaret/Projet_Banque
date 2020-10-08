#include "comptebancaire.h"

/**
 * @brief CompteBancaire::CompteBancaire
 * @param _solde
 */

CompteBancaire::CompteBancaire(const float _solde):
    solde(_solde)
{

}

void CompteBancaire::Deposer(const float _montant)
{
    if(_montant > 0)
    {
        solde = solde + _montant;
    }
}

bool CompteBancaire::Retirer(const float _montant)
{
    bool soldeSuffisant = false;

    if(_montant > 0)
    {
        if(_montant <= solde)
        {
            solde = solde - _montant;
            soldeSuffisant = true;
        }
    }

    return soldeSuffisant;
}

float CompteBancaire::ConsulterSolde()
{
    return solde;
}

