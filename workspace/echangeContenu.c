#include <stdio.h>

void echangeContenu(int *a, int *b) {
    int c ;
    c=*a;
    *a=*b;
    *b=c;
    printf("a=%d,b=%d",*a,*b);
}

int main(void){
    int a = 10;
    int b =5;
    echangeContenu(&a,&b);

    return 0;
} 
