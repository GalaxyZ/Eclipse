
#include "Potion.h"

using namespace std;


Potion::Potion(string nomPotion, int prix , int manaPlus, int viePlus) : m_nomPotion( nomPotion), m_prix(prix),m_manaPlus(manaPlus),m_viePlus(viePlus)
{

}

int Potion::getViePlusPotion() const
{
	return m_viePlus;
}
int Potion::getManaPlusPotion() const
{
	return m_manaPlus;
}
int Potion::getPrixPotion() const
{
	return m_prix;
}
string Potion::getNomPotion() const
{
	return m_nomPotion;
}
