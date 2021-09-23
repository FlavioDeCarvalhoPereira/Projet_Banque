#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "compteBancaire.h"


class CompteEpargne : public CompteBancaire
{
private:

    float tauxInterets;
public:
    CompteEpargne(const float _tauxInterets);
    CompteEpargne(const float _solde, const float _tauxInterets);
    void CalculerInterets();
};

#endif // COMPTEEPARGNE_H
