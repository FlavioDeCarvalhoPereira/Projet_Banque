#include "compteEpargne.h"

CompteEpargne::CompteEpargne(const float _tauxInterets):
   CompteBancaire(0),
   tauxInterets(_tauxInterets)
{

}

CompteEpargne::CompteEpargne(const float _solde, const float _tauxInterets):
    CompteBancaire(_solde),
    tauxInterets(_tauxInterets)
{

}

void CompteEpargne::CalculerInterets()
{
solde = solde+((solde*tauxInterets)/100);
}
