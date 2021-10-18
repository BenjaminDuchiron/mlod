#include <stdio.h>




struct Matrix
{
    int nbLigne;
    int nbcolone;
    int matrice[nbLigne][nbcolone];

   
};


typedef struct Matrix Matrix;



struct MatrixArray
{
    
    Matrix tab[];
}


typedef struct MatrixArray MatrixArray;



Matrix* readMatrix(int nombredematrice, int numeromatrice ){
    for (int i = 0; i < numeromatrice; i++) {
        int l,c;
        scanf("%i",&l);
        scanf("%i",&c);
        int nbcaractere= (l* c);
        parcourir(nbcaractere);}


    Matrix *matrice= malloc(sizeof(Matrix));
    scanf("%i",&Matrix.nbligne);
    scanf("%i",&Matrix.nbcolone);
    for (int i = 0; i < Matrix.nbligne; i++) {
        for (int j = 0; j < Matrix.nbcolone; i++) {
            scanf("%i",&Matrix.matrice[i][j]);
    return matrice;
}
    }
}



void parcourir(int nbcaractere){
    int a ;
    for (int i = 0; i < nbcaractere; i++) {
        scanf("%i", &a)
}
}


MatrixArray* readMatrixArray(int nombredematrice){
    MatrixArray *tableaudematrice= malloc(sizeof(Matrix)*nombredematrice);
    for (int i = 0; i < nmobrematrice; i++) {
            tableaudematrice.tab[i]=readMatrix(nombredematrice, i);
    return tableaudematrice;


}
}

int main(void){
    
   int nombredematrice;
   scanf("%i",&nombredematrice);
   MatrixArray* tableaudematrice =readMatrixArray(nombredematrice);
   
   
    printf (nombredematrice, tableaudematrice)

    return 0;
} 