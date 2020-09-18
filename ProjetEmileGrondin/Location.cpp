//But: Calculer le montont qu'une personne va débourser lors d'un voyage avec une voiture loué
//Auteur: Émile Grondin 
//Date: 09/17/2020

// Pour communiquer avec l'utilisateur
#include <iostream>

void main()
{
	//Pour afficher correctement les accents dans la console
	setlocale(LC_ALL, "");

	// Déclaration de la variable
	int nbJours;
	int nbKilo;
	int nbKiloGratuit;
	int nbKiloAPayer;
	float nbLitre;
	float prixEssence;
	int prixLocation;
	float prixTotal;

	// Le programme affiche un message qui demande à l'utilisateur d'entrer un nombre de kilometres
	std::cout << "Veuillez entrer le nombre de kilomètres parcouru durant votre voyage: ";
	// Le programme lit le nombre qui a été tapé par l'utilisateur
	std::cin >> nbKilo;
	// Le programme affiche un message qui demande à l'utilisateur d'entrer un nombre de jours
	std::cout << "Veuillez entrer la durée de votre voyage en jours: ";
	// Le programme lit le nombre qui a été tapé par l'utilisateur
	std::cin >> nbJours;

	// Calcul du nombre de kilomètre gratuit que dispose l'utilisateur
	nbKiloGratuit = nbJours * 250;

	// Le programme calcule le montant total que va devoir payer l'utilisateur
	if (nbKilo > nbKiloGratuit)		//Si le nombre de kilometres total dépasse le nombre de kilometres gratuits
	{
		nbKiloAPayer = nbKilo - nbKiloGratuit;		//Calcul combien de kilometres vont etre à payer
		nbLitre = (7.6 / 100 + nbKiloAPayer) * 1.25;		//Calcul de de l'essence
		prixEssence = nbKiloAPayer * 0.05 + nbLitre;
		prixLocation = nbJours * 45;		//Calcul de la location de la voiture
		prixTotal = prixLocation + prixEssence;		//Calcul du prix total
		std::cout << "Votre voyage vous a couté " << prixTotal << "$";		//Le programme affiche le montant total de l'utilisateur a dû payer pour son voyage
	}
	else		//Si le nombre de kilometres total est inferieur ou égal au nombre de kilometres gratuits
	{
		prixLocation = nbJours * 45;		//Calcul de la location de la voiture
		prixTotal = prixLocation;		//Calcul du prix total
		std::cout << "Votre voyage vous a couté " << prixTotal << "$";		//Le programme affiche le montant total de l'utilisateur a dû payer pour son voyage
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