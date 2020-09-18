//But: Calculer le montont qu'une personne va d�bourser lors d'un voyage avec une voiture lou�
//Auteur: �mile Grondin 
//Date: 09/17/2020

// Pour communiquer avec l'utilisateur
#include <iostream>

void main()
{
	//Pour afficher correctement les accents dans la console
	setlocale(LC_ALL, "");

	// D�claration de la variable
	int nbJours;
	int nbKilo;
	int nbKiloGratuit;
	int nbKiloAPayer;
	float nbLitre;
	float prixEssence;
	int prixLocation;
	float prixTotal;

	// Le programme affiche un message qui demande � l'utilisateur d'entrer un nombre de kilometres
	std::cout << "Veuillez entrer le nombre de kilom�tres parcouru durant votre voyage: ";
	// Le programme lit le nombre qui a �t� tap� par l'utilisateur
	std::cin >> nbKilo;
	// Le programme affiche un message qui demande � l'utilisateur d'entrer un nombre de jours
	std::cout << "Veuillez entrer la dur�e de votre voyage en jours: ";
	// Le programme lit le nombre qui a �t� tap� par l'utilisateur
	std::cin >> nbJours;

	// Calcul du nombre de kilom�tre gratuit que dispose l'utilisateur
	nbKiloGratuit = nbJours * 250;

	// Le programme calcule le montant total que va devoir payer l'utilisateur
	if (nbKilo > nbKiloGratuit)		//Si le nombre de kilometres total d�passe le nombre de kilometres gratuits
	{
		nbKiloAPayer = nbKilo - nbKiloGratuit;		//Calcul combien de kilometres vont etre � payer
		nbLitre = (7.6 / 100 + nbKiloAPayer) * 1.25;		//Calcul de de l'essence
		prixEssence = nbKiloAPayer * 0.05 + nbLitre;
		prixLocation = nbJours * 45;		//Calcul de la location de la voiture
		prixTotal = prixLocation + prixEssence;		//Calcul du prix total
		std::cout << "Votre voyage vous a cout� " << prixTotal << "$";		//Le programme affiche le montant total de l'utilisateur a d� payer pour son voyage
	}
	else		//Si le nombre de kilometres total est inferieur ou �gal au nombre de kilometres gratuits
	{
		prixLocation = nbJours * 45;		//Calcul de la location de la voiture
		prixTotal = prixLocation;		//Calcul du prix total
		std::cout << "Votre voyage vous a cout� " << prixTotal << "$";		//Le programme affiche le montant total de l'utilisateur a d� payer pour son voyage
	}
}


/*
Plan de test

nb kilometres		nb jours					montant total
250					1							45$
500					2							90$
1000				3							460.095$
100					5							225$
10000				10							10200.1$

*/