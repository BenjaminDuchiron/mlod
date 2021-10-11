#include <stdio.h>

int des(int i, int j,int k,int nombre) {
    if (nombre ==i+j+k ){
        return 1;
      }
    else {return 0;
        }
    
     }
    
    

   
    


int main(void){
    int nombre=5;
    int i;
    int j;
    int k;
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            for(k=1;k<=6;k++){ 
                if (des(i,j,k,nombre) == 1){
                     printf ("dés= %u%u%u ",i,j,k);
                 }
            }
        }
    }
    return 0;
} 