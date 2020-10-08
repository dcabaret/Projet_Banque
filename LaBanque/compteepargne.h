#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "comptebancaire.h"

/**
 * @brief Déclaration de la classe CompteEparge
 * @author Damien CABARET
 * @date 08/10/2020
 */

class CompteEpargne : public CompteBancaire
{
protected:
    /// Le taux des interets
    float tauxInterets;
public:
    CompteEpargne(const float _solde=0);
    float CalculerInterets();
    void ModifierTaux(const float _tauxInterets);
};

#endif // COMPTEEPARGNE_H
