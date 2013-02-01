#include "demande.h"
#include "Personnage.h"
#include "Sort.h"
#include "Arme.h"
#include "Potion.h"
#include <iostream>
#include <string>

using namespace std;

Personnage a("votre personnage"),b("ennemi");

int tour(0);
int tourb(0);
char faire;
char faire2;
char faire3;
void demander1()
{
string uai = (a.estVivant());
string ui = (b.estVivant());
if (ui == "non")
{
cout <<"Bravo !!! Vous avez gagne !!!"<<endl;
a.gagnerPo(5);
a.gagnerXp(45);
cout <<"+ 5 pieces d'or"<<endl;
cout <<"+ 10 points d'experience"<<endl;
redemander();
}
else if(uai =="non")
{
cout<<"Dommage..... vous avez perdu ..."<<endl;
redemander();
}
else if(ui =="oui"or uai=="oui")
{
if(tour != tourb)
{
b.atkIa(b,a);
 tourb++;
    demander1();
}
else
{

cout << " a/A pour Attaquer "<<endl;
cout << " b/B pour boire une potion "<<endl;
cout << " h/H pour se soigner "<<endl;
cout << " f/F pour voir l'etat de son personnage "<<endl;
cout << " x/X pour passer ce trour (vous gagnerez +10 mana) "<<endl;



cin >> faire ;
string ui = (b.getestVivanta());

switch(faire)
{
case 'A':
{
case 'a'   :
	{
demander2a();
	break;
	}
	break;
	}
	case 'F':
{
case 'f'   :
	{
a.afficherEtat();
demander1();
	break;
	}
	break;
	}
	case 'E':
{
case 'e'   :
	{
b.afficherEtat();
demander1();
	break;
	}
	break;
	}
	case 'B':
{
	case 'b':
	{
demander2b();
		 break;
	}
	}

	case 'H':
   {
	case 'h':
	{
	demander2h();
 break;
	}
	}
	case 'X':
{
	case 'x':

	{
	cout << " Vous avez gagné +10 mana "<<endl;
	a.boirePotionDeMana(10);
	tour++;
demander1();
		 break;
	}
	}
default:
cout<<"saisie invalide"<<endl;
demander1();
}

}

}


}



//demander 2a
void demander2a()
{


cout << " s/S pour Attaquer avec un sort "<<endl;
cout << " m/M pour Attaquer au corps a corps "<<endl;
cout<<" r/R pour retourner a la selection precedente"<<endl;
cin>> faire2;

switch(faire2)
{
case 'S':
{
case 's' :
	{
	 demander3as();
	break;
	}
	}

	case 'R':
{
case 'r' :
	{
	 demander1();
	break;
	}
	}
	case 'M':
{
case 'm'   :
	{
	demander3am();

	break;
	}
	}
	default:
	{
	demander2a();
		 break;}


	}


//si faire vaut b/B




}






void demander2b()
{




cout << " v/V pour boire une potion de vie "<<endl;
cout << " m/M pour boire une potion de mana "<<endl;
cout << " r/R pour retourner à la selection precedente "<<endl;

cin>> faire2;
;
switch(faire2)
{
case 'V':
{
case 'v' :
	{
	demander3bv();

	break;
	}
	}

	case 'R':
{
case 'r' :
	{
demander1();
	break;
	}
	}
	case 'M':
{
case 'm'   :
	{
	demander3bm();
	break;
	}
	}
	default:
	{
	demander2a();
		 break;}


	}





}
void demander2h()
{

//si faire vaut h


cout << " d/D pour utiliser des soins directs "<<endl;

cout << " r/R pour retourner à la selection precedente "<<endl;

cin>> faire2;
;
switch(faire2)
{
case 'D':
{
case 'd' :
	{
	demander3hd();
	break;
	}
	}

	case 'R':
{
case 'r' :
	{
	 demander1();
	break;
	}
	}

	default:
	{
	demander2a();
		 break;}


	}





}

void demander3as()
{

cout << " 1/ Kamehameha (20 degats,15 mana)"<<endl;
Sort Kamehameha("Kamehameha",20,15);
cout << " 2/ Big Bang (30 degats,20 mana)"<<endl;
Sort BigBang("BigBang",30,20);
cout << " 3/ Genkidama (40 degats,35 mana)"<<endl;
Sort Genkidama("Genkidama",40,35);
cout << " r/R pour retourner à la selection precedente "<<endl;
cin>> faire3;

switch(faire3)
{

case '1' :
	{
	cout << "Kamehameha"<<endl;
a.attaquerSort(b,Kamehameha);
	tour++;
	   demander1();
	break;
	}


	case 'R':
{
case 'r' :
	{
	 demander1();
	break;
	}
	}

case '2'   :
	{
	cout << " Big Bang "<<endl;
	a.attaquerSort(b,BigBang);
	tour++;
	   demander1();
	break;
	}
	case '3'   :
	{
	cout << " Genkidama "<<endl;
	a.attaquerSort(b,Genkidama);
	tour++;
	   demander1();
	break;
	}
	default:
	{
	demander2a();
		 break;}


	}

}


void demander3am()
{

cout << " 1/ Attaque du chien (10 degats) "<<endl;
cout << " 2/ Attaque du loup (15 degats)"<<endl;
cout << " 3/ Attaque du lion (20 degats) "<<endl;
cout << " r/R pour retourner à la selection precedente "<<endl;
cin>> faire3;

switch(faire3)
{

case '1' :
	{
	cout << "Attaque du chien"<<endl;
	a.attaquer(b,10);
	tour++;
	   demander1();
	break;
	}


	case 'R':
{
case 'r' :
	{
	 demander1();
	break;
	}
	}

case '2'   :
	{
	cout << " Attaque du loup "<<endl;
	a.attaquer(b,15);
	tour++;
	   demander1();
	break;
	}
	case '3'   :
	{
	cout << " Attaque du lion "<<endl;
	a.attaquer(b,20);
	tour++;
	   demander1();
	break;
	}
	default:
	{
	demander2a();
		 break;}


	}

}

void demander3bv()
{

cout << " 1/ Potion de soin mineur (prix:5po +10 vie)"<<endl;
Potion soinmineur("soin mineur", 5 , 0, 10);

cout << " 2/ Potion de soin majeur (prix:10po +25 vie)"<<endl;
Potion soinmajeur("soin majeur", 10 , 0, 25);

cout << " 3/ Potion de soin extreme (prix:25po +45 vie)"<<endl;
Potion soinextrem("soin extreme", 25 , 0, 45);

cout << " r/R pour retourner à la selection precedente "<<endl;
cin>> faire3;

switch(faire3)
{

case '1' :
	{
	cout << "Potion de soin mineur"<<endl;
	a.boirePotion(soinmineur,a);
	tour++;
	   demander1();
	break;
	}


	case 'R':
{
case 'r' :
	{
	 demander1();
	break;
	}
	}

case '2'   :
	{
	cout << " Potion de soin majeur "<<endl;
		a.boirePotion(soinmajeur,a);
	tour++;
	   demander1();
	break;
	}
	case '3'   :
	{
	cout << " Potion de soin extreme "<<endl;
	a.boirePotion(soinextrem,a);
	tour++;
	   demander1();
	break;
	}
	default:
	{
	demander2a();
		 break;}


	}

}



void demander3bm()
{

cout << " 1/ Potion de mana mineur "<<endl;
Potion manamineur("mana mineur",5,10,0);
cout << " 2/ Potion de mana majeur"<<endl;
Potion manamajeur("mana majeur",10,25,0);
cout << " 3/ Potion de mana extreme "<<endl;
Potion manaextrem("mana extreme",25,45,0);
cout << " r/R pour retourner à la selection precedente "<<endl;
cin>> faire3;

switch(faire3)
{

case '1' :
	{
	cout << "Potion de mana mineur"<<endl;
	a.boirePotion(manamineur,a);
	tour++;
	   demander1();
	break;
	}


	case 'R':
{
case 'r' :
	{
	 demander1();
	break;
	}
	}

case '2'   :
	{
	cout << " Potion de mana majeur "<<endl;
	a.boirePotion(manamajeur,a);
	tour++;
	   demander1();
	break;
	}
	case '3'   :
	{
	cout << " Potion de mana extreme "<<endl;
	a.boirePotion(manaextrem,a);
	tour++;
	   demander1();
	break;
	}
	default:
	{
	demander2a();
		 break;}


	}

}



void demander3hd()
{

cout << " 1/ Premiers soins (+10 vie, 5 po)"<<endl;
Sort premiersoin("Premiers soins",10,5);
cout << " 2/ Soin du medecin (+25 vie, 15 po)"<<endl;
Sort smedecin("Soin du medecin",25,15);
cout << " 3/ Soin du druide "<<endl;
Sort sdruide("Soin du druide (+30 vie, 20po)",30,20);
cout << " r/R pour retourner à la selection precedente "<<endl;
cin>> faire3;

switch(faire3)
{

case '1' :
	{
	cout << "Premiers soins"<<endl;
	a.sesoigner(a,premiersoin);

	tour++;
	   demander1();
	break;
	}


	case 'R':
{
case 'r' :
	{
	 demander1();
	break;
	}
	}

case '2'   :
	{
	cout << " Soin du medecin "<<endl;
	a.sesoigner(a,smedecin);
	tour++;
	   demander1();
	break;
	}
	case '3'   :
	{
	cout << " Soin du druide "<<endl;
	a.sesoigner(a,sdruide);
	tour++;
	   demander1();
	break;
	}
	default:
	{
	demander2a();
		 break;}


	}

}

void demander3ht()
{

cout << " 1/ Lumiere inferieur "<<endl;
cout << " 2/ Lumiere superieur"<<endl;
cout << " r/R pour retourner à la selection precedente "<<endl;

cin>> faire3;

switch(faire3)
{

case '1' :
	{
	cout << "Lumiere inferieur"<<endl;
	tour++;
	break;
	}


	case 'R':
{
case 'r' :
	{
	 demander1();
	break;
	}
	}

case '2'   :
	{
	cout << " Lumiere superieur"<<endl;
	tour++;
	break;
	}

	default:
	{
	demander2a();
		 break;}


	}

}

void redemander()
{
char on;
cout<<"Voulez vous faire une autre partie (o/n)"<<endl;
cin>> on;
switch (on)
{
case 'o':
{
Potion re("reconfort",0,100,100);
b.boirePotion(re,b);
a.boirePotion(re,a);
b.estVivant();
a.estVivant();
demander1();
break;}
case 'n':
{
cout<<"Fin de la partie"<<endl;
break;}
default:
{
cout<<"Saisie invalide"<<endl;
redemander();
break;}
}
}
