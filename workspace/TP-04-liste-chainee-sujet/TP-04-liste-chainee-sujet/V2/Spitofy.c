// gcc -W -Wall -std=c99 linkedList.c linkedListOfString.c -o linkedListOfString

// valgrind --leak-check=yes --leak-check=full --show-leak-kinds=all --show-reachable=no ./linkedListOfString

#include "linkedListOfMusic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// ============
// Definitions of external functions
// ============

// void afficheElement(Element e) {
// 	printf("%s ",(char*)e);
// }

// void detruireElement(Element e) {}

// // compare deux elements
// bool equalsElement(Element e1, Element e2){
// 	return strcmp((char *)e1,(char *)e2)==0;
// }

// ============
// main
// ============

int main(void){
	
	Liste a =readMusic();
	printf("%s\n","Name,Artist,Album,Genre,Disc Number,Track Number,Year");
	afficheListe_i(a);
	
	return EXIT_SUCCESS;
}