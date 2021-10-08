#include <stdio.h>

typedef short   Typeentier;

Typeentier factorielle() {
    int N = 0;
    int produit =1 ;
    printf("entrer un entier");
    scanf("%d",&N);
    for(int i =0 ; i<= N; i++){
        produit=produit*i;
        }
    return produit
    



int main(void){
    int age =11;
    float prix_plein_tarif = 100.0;
    printf ("factorielle= %f ",factorielle());

    return 0;
} 