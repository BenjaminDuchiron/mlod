#include "arbre-bin-recherche.h"
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// retourne TRUE si a est l'arbre vide et FALSE sinon
bool estVide(ArbreBinaire a) {
	if (a != NULL){
	
	return false;
} 
	
return true;
}

// initialise l'arbre a à l'arbre vide
void initialiser(ArbreBinaire* a) {
	*a =NULL;
}

// créer un arbre contenant un seul noeud ayant la valeur e
ArbreBinaire creer(Element e) {
	ArbreBinaire a = malloc( sizeof(Noeud));
	a->val = e;
	initialiser(&a->filsGauche);
    initialiser(&a->filsDroit);
	return a;
}

// insere e dans a sachant que a est un arbre binaire de recherche
// si a contient déjà un element e, ce dernier n'est pas insérer afin d'éviter les doublons
// version itérative
ArbreBinaire insere_i(ArbreBinaire a, Element e) {
	if (estVide(a)){
		return (creer(e));
	}
	ArbreBinaire b = a;
	if (e==b->val){
		return (a);
	}
	while (estVide(b)==false){
		if (e==b->val){
		return (a);
		}
		if (e < b->val) {
   			 if (!estVide(b->filsGauche)) {
        		b = b->filsGauche;
    		}
			else {
        		b->filsGauche = creer(e);
        		return (a);
    		}
    	}
		if (e > b->val) {
   			 if (!estVide(b->filsDroit)) {
        		b = b->filsDroit;
    		}
		
    		else {
        		b->filsDroit = creer(e);
        		return (a);
    		}
		}
	
	}
	
	return a;
}	

// insere e dans a sachant que a est un arbre binaire de recherche
// si a contient déjà un element e, ce dernier n'est pas insérer afin d'éviter les doublons
// version récursive
ArbreBinaire insere_r(ArbreBinaire a, Element e) {
	ArbreBinaire b =a ;
	if(estVide(b)){
		return (creer(e));
	}
	if (e==b->val){
		return (b);
	}
	if (e < b->val) {
   		if (!estVide(b->filsGauche)) {
        	b->filsGauche= insere_r(b->filsGauche,e);
			return b;
    	}
		else {
        	b->filsGauche = creer(e);
        	return (b);
    	}
	}
	if (e > b->val) {
   		 if (!estVide(b->filsDroit)) {
       		b->filsDroit= insere_r(b->filsDroit,e);
			return b;
    	}
	
    	else {
       		b->filsDroit = creer(e);
       		return (b);
    	}
	}
	}

	


// retourne le nombre de noeud contenus dans l'arbre a
int nombreDeNoeud(ArbreBinaire a){
	
	
	if(estVide(a)){
	
		return 0;
	}
	
	return (1+nombreDeNoeud(a->filsGauche)+nombreDeNoeud(a->filsDroit));

}

// retourne la profondeur du noeud ayant la valeur e dans a
// retourne -1 si a est vide ou si e n'est pas dans a
int profondeur(ArbreBinaire a, Element e){
	if (estVide(a)){
		return -1;
	}
	int compteur =0;
	while (e != a->val){
		if (e> a->val) {
			if(!estVide(a->filsDroit)){
			a= a->filsDroit;
			compteur++;
			}
			else{
				return -1;
			}
		}
		if (e< a->val) {
			if(!estVide(a->filsGauche)){
			a= a->filsGauche;
			compteur++;
			}
			else{
				return-1;
			}
		}
	}

		return compteur;
}
int maximum(int a , int b){
	if (a>b){
		return (a);
	}
	return (b);
}
// retourne la hauteur de l'arbre a
int hauteur(ArbreBinaire a){
	if (estVide(a)){
		return 0;
	}
	else
	
		return (1+maximum(hauteur(a->filsDroit),hauteur(a->filsGauche))); // recreer max 
}

// retourne le pere de elem dans l'arbre a ou NULL s'il n'existe pas
ArbreBinaire pere(ArbreBinaire a, Element elem){  
	ArbreBinaire b;
	if (estVide(a) || profondeur(a,elem)==0){
		return NULL;
	}
	else{ 
	while ((!estVide(a->filsDroit)) || (!estVide(a->filsGauche) && elem !=a->val)){
		if (elem> a->val) {
			if(!estVide(a->filsDroit)){
			 b= a	;
			a= a->filsDroit;

			}
			else{
			return NULL;
			}
		}
		if (elem< a->val) {
			if(!estVide(a->filsGauche)){
			b= a	;
			a= a->filsGauche;
			}
			else{
			return NULL;
			}
		}	
	}
	if(elem !=a->val){
		return NULL;
	}
	return b;
	}
}


void afficheRGD_r(ArbreBinaire a){
{
    if (a == NULL)
        return;
    for (int i = 0; i < hauteur(a); i++)
        printf(" ");
    printf("-| %d:\n", a->val);
    afficheRGD_r(a->filsGauche);
    afficheRGD_r(a->filsDroit);
}
}

void afficheGRD_r(ArbreBinaire a){
	{
    if (a == NULL)
        return;
	afficheGRD_r(a->filsGauche);
    for (int i = 0; i < hauteur(a); i++)
        printf(" ");
	
    printf("|- %d:\n", a->val);
    
    afficheGRD_r(a->filsDroit);
}
}

void afficheGDR_r(ArbreBinaire a){
		{
    if (a == NULL)
        return;
	afficheGDR_r(a->filsGauche);
	afficheGDR_r(a->filsDroit);
    for (int i = 0; i < hauteur(a); i++)
        printf(" ");
	
    printf("-| %d:\n", a->val);
    
    
}
}

// retourne le noeud dont la valeur est minimum dans l'arbre
// Suppose que a est un arbre binaire de recherche sans doublons
ArbreBinaire min(ArbreBinaire a){
	while (!estVide(a->filsGauche)){
		a=a->filsGauche;
	}
	return a;
}

// retourne le noeud dont la valeur est maximum dans l'arbre
// Suppose que a est un arbre binaire de recherche sans doublons
ArbreBinaire max(ArbreBinaire a){
	while (!estVide(a->filsDroit)){
		a=a->filsDroit;
	}
	return a;
}


// retourne l'arbre dont la valeur de la racine est elem et NULL si elem n'existe dans a 
// version récursive
ArbreBinaire recherche_r(ArbreBinaire a, Element elem){
	if ( estVide(a)){
		return NULL;
	}

	if ( (elem==(a->val))){
		
		return a;
	}
	else{
		if (elem<a->val){
			return recherche_r(a->filsGauche,elem);
		}
		else {
			return recherche_r(a->filsDroit,elem);
		}
	}
}


// suppime x de a
ArbreBinaire supprimer_r(ArbreBinaire a,Element x)
{	if (!estVide(a)){
		if ( x < a->val ) {
				a->filsGauche = supprimer_r( a->filsGauche, x);
				return a;
			}
		if ( x > a->val ) {
			a->filsDroit = supprimer_r( a->filsDroit, x);
			return a;
		}
		ArbreBinaire Asupprimer=a;
		if (Asupprimer==NULL){
			return a;
		}
		if(estVide(Asupprimer->filsGauche)&&estVide(Asupprimer->filsDroit)) {
			free(Asupprimer);
			return NULL;
		}
		if (estVide(Asupprimer->filsGauche)) {
			ArbreBinaire b = Asupprimer->filsDroit;
			
			free(Asupprimer);
			
			return a;
		}		
		if (estVide(Asupprimer->filsDroit)) {
			ArbreBinaire b = Asupprimer->filsGauche;
			
			free(Asupprimer);
			return a;	
		}

		if (!estVide(Asupprimer->filsGauche)&&!estVide(Asupprimer->filsDroit)){
			ArbreBinaire newDroit = Asupprimer->filsDroit;
			ArbreBinaire newGauche = Asupprimer->filsGauche;
			ArbreBinaire b=max(newGauche);
			ArbreBinaire newarbre = creer(b->val);
			
			newarbre->filsGauche=supprimer_r(newGauche,b->val);
			newarbre->filsDroit=newDroit;
			free(Asupprimer);
			
			return newarbre;

		}
}


	
	

 }

void detruire_r(ArbreBinaire b){
	
	if(estVide(b)){
		free (b);
			}
	else{
   		if (!estVide(b->filsGauche)) {
        	detruire_r(b->filsGauche);
			return b;
    	}
		else {
        	free(b->filsGauche);
    	}
	
	
   		if (!estVide(b->filsDroit)) {
       		detruire_r(b->filsDroit);
			return b;
    	}
	
    	else {
       		free(b->filsDroit);
    	}
		if (b->val!=NULL){
			b->val = NULL;
		}
	}
	
	

}

