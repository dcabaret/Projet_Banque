#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

/**
 * @brief Déclaration de la classe compteBancaire
 * @author Damien CABARET
 * @date 08/10/2020
 */

class CompteBancaire
{
protected:
    /// Le solde du compte
    float solde;
public:
    CompteBancaire(const float _solde=0);
    void Deposer(const float _montant);
    bool Retirer(const float _montant);
    float ConsulterSolde();
};

#endif // COMPTEBANCAIRE_H

