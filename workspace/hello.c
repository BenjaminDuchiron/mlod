#include <stdio.h>

float prix_billet_avion(int age, float prix_plein_tarif) {
    if (age<=2)
        prix_plein_tarif= 0.1*prix_plein_tarif ;
    else {
        if(age<=12)
            prix_plein_tarif=0.5*prix_plein_tarif;
        
    }
    return prix_plein_tarif;
}

int main(void){
    int age =11;
    float prix_plein_tarif = 100.0;
    printf ("prix_billet_avion= %f ",prix_billet_avion(age,plein));

    return 0;
} 