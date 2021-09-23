#include "compteBancaire.h"

CompteBancaire::CompteBancaire(const float _solde):
    solde(_solde)
{

}

CompteBancaire::~CompteBancaire()
{

}

void CompteBancaire::Deposer(const float _montant)
{
    if (_montant > 0){
            solde = solde +_montant;
        }
    else {
            cout << "Impossible d'ajouter des choses négatives";
        }
}

bool CompteBancaire::Retirer(const float _montant)
{
    bool x = true;
    if(solde < _montant){
        x=false;
    }
    else {
        x=true;
        solde = solde - _montant;
    }
    return x;
}

float CompteBancaire::ConsulterSolde()
{
    return solde;
}
