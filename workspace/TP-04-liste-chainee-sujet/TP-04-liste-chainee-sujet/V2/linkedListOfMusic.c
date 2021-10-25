
#include <stdio.h>
#include <stdlib.h>


#include "linkedListOfMusic.h"

#include <string.h>

// code qui n'aime pas les doubles fleches ... 
 Liste Trie (Liste listemusic){
		Liste head = list_head; 
		Liste cur;

	while (list_head->next != NULL) {
    	if (list_head->val <= list_head->next->val) {
         list_head = list_head->next; 
         continue;
    	} 
    	cur = retirePremier_r(list_head->next, list_head); /// a modifier 
    	inserer_noeud(cur, list_head);
    	list_head = head; 
	} 
		return L
				}

		

Liste readMusic(){
	
	FILE* f =fopen ("music.csv","r");
	Liste listeMusic=NULL;

	
	
	char intermediaire[255];
	char* dup ;
	
	fgets(intermediaire,255,f);
	while (fgets(intermediaire,255,f)!=NULL){
	 	dup=strdup(intermediaire);
	 	Music *musicSpitofy = malloc(sizeof(Music));
	 	musicSpitofy->Name= strsep(&dup,",");
	
	 	
	 	musicSpitofy->Artist= strsep(&dup,",");
	 	musicSpitofy->Album= strsep(&dup,",");
	 	musicSpitofy->Genre= strsep(&dup,",");
	 	musicSpitofy->Disc_number= getNumber(strsep(&dup,","));
		musicSpitofy->Track_number= getNumber(strsep(&dup,","));
		musicSpitofy->Year= getNumber(strsep(&dup,","));
	 	
	 	

	 	free (dup);

		listeMusic = ajoutFin_r((musicSpitofy),listeMusic);
	}

	 fclose(f);
	return listeMusic;

}

int getNumber(char *chunk){
	if (strlen(chunk)!=0){
		return atoi (chunk);
	}
	else{
		return -1;
	}
}

int scanLineAsInt() {
	int buf;
	scanf("%i\n",&buf);
	return buf;
}

char* scanLine()
{
	int maxLineSize = 255;
	char c, *line = calloc(maxLineSize+1,sizeof(char));

	scanf("%250[^\n]", line);

	if ( (c = getchar()) != '\n') {
		/* we did not get all the line */
		line[250] = '[';
		line[251] = line[252] = line[253] = '.';
		line[254] = ']';
		// line[255] = '\0'; // useless because already initialized by calloc

		// let's skip all chars untli the end of line
		while (( (c = getchar()) != '\n') && c != EOF) ;
	}

	return line;
}
