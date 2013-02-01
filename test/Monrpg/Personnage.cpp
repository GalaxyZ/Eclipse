
#include "Personnage.h"
#include "demande.h"

#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;




Personnage::Personnage(string nomPerso) : m_nomPerso( nomPerso), m_vie(100),m_mana(100),m_estVivanta("oui"),m_po(10),m_lvl(1),m_xp(0)
{

}


void Personnage::perdreMana(int manaUse)
	{

		m_mana-=manaUse;

if(m_mana<0)
{
	m_mana=0;
}
}

void Personnage::boirePotionDeVie(int quantite)
{
    m_vie += quantite;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
}

void Personnage::boirePotionDeMana(int quantite)
{
    m_mana += quantite;

    if (m_mana > 100)
    {
        m_mana = 100;
    }
}
void Personnage::boirePotion(Potion &lapotion, Personnage &nomp)
								 {
	string nompot= lapotion.getNomPotion();
    int manaaj= lapotion.getManaPlusPotion();
    int vieaj=lapotion.getViePlusPotion();
   int prixmoin= lapotion.getPrixPotion();
   if(m_po<prixmoin)
   {cout<<"Vous ne pouvez pas acheter cette potion"<<endl;
   demander1();}
   else{
     m_po -= prixmoin;
     m_mana +=manaaj;
     m_vie +=vieaj;
string nomperso= nomp.m_nomPerso;

    if (m_mana > 100)
    {
        m_mana = 100;
    }
     if (m_vie > 100)
    {
        m_vie = 100;
    }
    cout<<nomperso<<" a bu une potion de "<<nompot<<",vous avez gagne "<<manaaj<<" points de mana et "<<vieaj<<" points de vie"<<endl;
    }
}
void Personnage::recevoirDegatsMagiques(int degatsMagiques)
{


    m_vie -= degatsMagiques;

    if (m_vie < 0)
    {
        m_vie = 0;
    }

}
void Personnage::seheal(Sort &lesort)
{

    int viep= lesort.getDegatsMagiques();
    m_vie += viep;

    if (m_vie >100)
    {
        m_vie = 100;
    }

}

void Personnage::gagnerPo(int po)
{
    m_po += po;
}
void Personnage::gagnerXp(int xp)
{
if(m_lvl==9)
{
cout<<" vous etes au niveau maximum donc vous ne pouvez plus gagner d experience"<<endl;
}
else{
    m_xp += xp;
    int xp2 =50;
    int xp3 =100;
    int xp4 =150;
    int xp5 =200;
    int xp6 =250;
    int xp7 =300;
    int xp8 =350;
    int xp9 =400;
    int xp10 =500;
    switch(m_lvl)
    {
    case '1':
    {
    if(m_xp >= xp2)
    {
    m_lvl++;
    m_xp= m_xp-xp2;
    }
    break;
    }
    case '2':
    {
     if(m_xp >= xp3)
    {
    m_lvl++;
    m_xp= m_xp-xp3;
    }
    break;
    }
    case '3':
    {
     if(m_xp >= xp4)
    {
    m_lvl++;
    m_xp= m_xp-xp4;
    }

    break;
    }
    case '4':
    {
     if(m_xp >= xp5)
    {
    m_lvl++;
    m_xp= m_xp-xp5;
    }
    break;
    }
    case '5':
    {
     if(m_xp >= xp6)
    {
    m_lvl++;
    m_xp= m_xp-xp6;
    }
    break;
    }
    case '6':
    {
     if(m_xp >= xp7)
    {
    m_lvl++;
    m_xp= m_xp-xp7;
    }
    break;
    }
    case '7':
    {
     if(m_xp >= xp8)
    {
    m_lvl++;
    m_xp= m_xp-xp8;
    }
    break;
    }
    case '8':
    {
     if(m_xp >= xp9)
    {
    m_lvl++;
    m_xp= m_xp-xp9;
    }
    break;
    }
    case '9':
    {
     if(m_xp >= xp10)
    {
    m_lvl++;
    m_xp= m_xp-xp10;
    }
    break;
    }

  default:  {

    break;}




    }

}
}
void Personnage::attaquerSort(Personnage &cible,Sort cast)
{
int manauze = cast.getManaUse();
int manat = m_mana-manauze;
if (manat <=0 )
{
cout<<"Vous n avez pas assez de mana pour utiliser ce sort"<<endl;
demander1();
}
else
{
string nameperso=(cible.m_nomPerso);
int atkmag = (cast.getDegatsMagiques());
cout<<nameperso<<" perd "<<atkmag<<" points de vie "<<endl;
cible.recevoirDegatsMagiques(cast.getDegatsMagiques());
perdreMana(cast.getManaUse());


}
}

void Personnage::sesoigner(Personnage &cibl,Sort kast)
{
if (m_mana != 0)
{
string nameperso=(cibl.m_nomPerso);
int soin = (kast.getDegatsMagiques());
cout<<nameperso<<" gagne "<<soin<<" points de vie "<<endl;
cibl.seheal(kast);
perdreMana(kast.getManaUse());
}
else
{
cout<<"Vous n avez pas assez de mana pour utiliser ce sort"<<endl;
demander1();
}

}
void Personnage::atkIa(Personnage &ia,Personnage &aie)
{

    string quoi ("abcdef");
    srand(time(0));
    int lettre = rand() % 7;
    cout<<quoi[lettre]<<endl;
    switch(quoi[lettre])
    {
    case 'a':
    {
    ia.attaquer(aie,0);

    break;}
    case 'b':
      {
    ia.attaquer(aie,10);

    break;}
    case 'c':
      {
    ia.attaquer(aie,20);

    break;}
    case 'd':
      {
    ia.attaquer(aie,30);

    break;}
    case 'e':
    {
    ia.boirePotionDeVie(15);
cout<<"Ennemi gagne 15 points de vie"<<endl;

    break;}
    case 'f':
    {
    ia.boirePotionDeMana(15);

cout<<"Ennemi gagne 15 points de mana"<<endl;

    break;}
    default:
      {

    break;}


    }
}



void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible,int degatsAtk)
{
string nameperso=(cible.m_nomPerso);
int atktot = (m_arme.getDegats()) + degatsAtk;
cout<<nameperso<<" perd "<<atktot<<" points de vie "<<endl;

    cible.recevoirDegats(atktot);
}



void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}


string Personnage::estVivant()
{

    if (m_vie != 0)
    {
        m_estVivanta="oui";
    }
    else if (m_vie ==0)
    {
       m_estVivanta="non";
    }
return m_estVivanta;
}
string Personnage::getestVivanta() const
{
	return m_estVivanta;
}

void Personnage::afficherEtat()
{
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    cout << "Pieces d'or : " << m_po << endl;
    cout << "Experience : " << m_xp << endl;
    cout << "Niveau : " << m_lvl << endl;
    m_arme.afficher();


}
