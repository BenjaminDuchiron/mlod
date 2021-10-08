#include <stdio.h>
#include <stdbool.h>
bool estConvexe(bool tab[],int length) {
    int a=0;
    for (int i =0 ; i <=length; i++){
        if (tab[i]=! tab[i+1]){
            int a= a+1;
        }
    
    }
    if (a<2){
        return true;
    }
    else { return false;
    }
}   

int main(void){
    bool tab1[]={true, false, true , false, true};
    bool tab2[]= {true,true,true,true, false};
    int taille =5;
    estConvexe(tab1,taille);

    return 0;
} 
