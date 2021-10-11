#include <stdio.h>

int nombreparfait(int nombre,int tabl[]) {
    int a =0;
    for (int diviseur=1; diviseur<nombre; diviseur++ ){
    
        if ( nombre % diviseur ==0){
            tabl[a]=diviseur;
            a=a+1;
        }
    }
    int b=0;
    for (int compteur=0; compteur<nombre;compteur++){
        b=b+compteur;
    }   
    if (b==nombre){
        return 1;
    }
    return 0;
}


int main(void){
    int nombre =50;
    
    for (int i=1;i<nombre;i++){
        int tabl[i];
        if (nombreparfait(i,tabl)==1){
            printf("nombreparfait=%u",i);
        }
    }
    return 0;
} 