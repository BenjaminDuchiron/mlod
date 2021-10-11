#include <stdio.h>

enum MesMois {jan = 1, fev, mars, avr, mai, juin,
juil, aout, sept, oct, nov, dec};

typedef enum MesMois Mois;

struct DateSimple {
int jour;
Mois mois; // Simplification !
int annee;
};

typedef struct DateSimple Date;

Date initialiseDate ( Date *d ){
    int jour=scanf("%u" ,&d->jour);
    Mois mois=scanf("%u" ,(int*)&d-> mois);
    int annee=scanf("%u" ,&d-> annee);

    return (*d);
}


void  afficheDate (Date*d){
    
    switch (d->mois){
        case 1:
            printf("%s",'Janvier'); 
        break; 
        case 2: 
            printf("%s",'Fevrier');
        break;
        case 3 :
           printf("%s",'Mars');
        break;
        case 4:
            printf("%s",'Avril');
        break;
        case 5:
            printf("%s",'Mai');
        break;
        case 6 :
            printf("%s",'Juin');
        break;
        case 7:
            printf("%s",'Juillet');
        break;
        case 8 :
            printf("%s",'Aout');
        break;
        case 9:
            printf("%s",'septembre');
        break;
        case 10:
            printf("%s",'Octobre');
        break;
        case 11:
          printf("%s",'Novembre');
        break;
        case 12:
            printf("%s",'Decembre');
        break;
   
    }
}
Date creerDateParCopie(){
    
}
int main(void){
    Date d;
    initialiseDate(&d); //Pourquoi a t-on ajouté un &?
    afficheDate(&d);
    d= creerDateParCopie
    return 0;
} 