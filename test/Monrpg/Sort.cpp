
#include "Sort.h"

using namespace std;


Sort::Sort(string nomSort, int degatsMagiques , int manaUse) : m_nomSort( nomSort), m_degatsMagiques(degatsMagiques),m_manaUse(manaUse)
{

}

void Sort::changerSort(string nomSort, int degatsMagiques,int manaUse)
{
    m_nomSort = nomSort;
    m_degatsMagiques = degatsMagiques;
    m_manaUse = manaUse;
}

void Sort::afficherSort()
{
    cout << "Sort : " << m_nomSort << " (Dégâts : " << m_degatsMagiques << " Mana "<<m_manaUse<<")" << endl;
}

int Sort::getDegatsMagiques() const
{
    return m_degatsMagiques;
}
int Sort::getManaUse() const
{
	return m_manaUse;
}
