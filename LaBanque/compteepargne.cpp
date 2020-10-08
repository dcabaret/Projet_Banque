#include "compteepargne.h"

/**
 * @brief compteEpargne::compteEpargne
 * @param _solde
 * @param _tauxInterets
 */

CompteEpargne::CompteEpargne(const float _solde):
    CompteBancaire(_solde)
{

}

float CompteEpargne::CalculerInterets()
{
    float gain;

    gain = solde * (tauxInterets/100);

    return gain;
}

void CompteEpargne::ModifierTaux(const float _tauxInterets)
{
    tauxInterets = _tauxInterets;
}


