#ifndef DEF_POTION
#define DEF_POTION
#include <iostream>
#include <string>

class Potion
{
    public:

Potion(std::string nomPotion, int prix , int manaPlus, int viePlus);
int getViePlusPotion()const;
int getManaPlusPotion()const;
int getPrixPotion()const;
std::string getNomPotion() const;







    private:

    std::string m_nomPotion;
    int m_prix;
	int m_manaPlus;
	int m_viePlus;
};









#endif
