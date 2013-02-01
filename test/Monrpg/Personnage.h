#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"
#include "Sort.h"
#include "Potion.h"
class Personnage
{
    public:


Personnage(std::string nomPerso);


    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible,int degatsAtk);
    void boirePotionDeVie(int quantite);
    void gagnerPo(int po);
    void gagnerXp(int xp);
    void atkIa(Personnage &ia,Personnage &aie);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	std::string estVivant();
    void afficherEtat();
    void boirePotion(Potion &lapotion,Personnage &nomp);
	void boirePotionDeMana(int quantite);
	void perdreMana(int ManaUse);
	void recevoirDegatsMagiques(int DegatsMagiques);
	void attaquerSort(Personnage &cible,Sort cast);
	void seheal(Sort &lesort);
	void sesoigner(Personnage &cibl,Sort kast);
    std::string getestVivanta() const;

    private:
    int m_lvl;
    int m_po;
    int m_xp;
    int m_vie;
    int m_mana;
    Arme m_arme;
    std::string m_nomPerso;
	std::string m_estVivanta;
};

#endif
