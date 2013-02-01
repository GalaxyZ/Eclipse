#ifndef DEF_SORT
#define DEF_SORT
#include <iostream>
#include <string>

class Sort
{
    public:


	Sort(std::string nomSort, int degatsMagiques , int manaUse);
    void changerSort(std::string nomSort, int degatsMagiques, int manaUse);
    void afficherSort();
    int getDegatsMagiques() const;
	int getManaUse () const ;


    protected:

    std::string m_nomSort;
    int m_degatsMagiques;
	int m_manaUse;
};









#endif
