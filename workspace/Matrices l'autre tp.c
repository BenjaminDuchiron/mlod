#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void mult_matrice( int64_t matriceResultat[5][5],int64_t matrice1[5][5], int64_t matrice2[5][5], int taille) {
    for(int i=1; i<=taille;i++){
        for(int j=1; j<=taille;j++){
            for(int k=1; k=taille;k++){
            matriceResultat[i][j] += (matrice1[i][k]*matrice2[k][j]);

            }
        }
    }
    
}

void affiche_matrice(){
    *matriceResultat = mult_matrice( int64_t matriceResultat[5][5],int64_t matrice1[5][5], int64_t matrice2[5][5]);
    for(int i=1; i<6;i++){
        for(int j=1; j<6;j++){
            printf("")
}

int main(void){
    //matrices en ligne * colonne
int64_t matrice1[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
int64_t matrice2[5][5]={{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10},{6,7,8,9,10}};
int64_t matriceResultat[5][5];
mult_matrice(matriceResultat,matrice1,matrice2);
affiche_matrice(matriceResultat);
return EXIT_SUCCESS;
} 
