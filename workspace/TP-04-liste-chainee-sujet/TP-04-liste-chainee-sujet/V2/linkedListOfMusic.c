
#include <stdio.h>
#include <stdlib.h>


#include "linkedListOfMusic.h"

#include <string.h>

Liste readMusic(){
	
	FILE* f =fopen ("music.csv","r");
	Liste listeMusic=NULL;

	
	
	char intermediaire[255];
	char* dup ;
	printf("\n",dup);
	while (fgets(intermediaire,255,f)!=NULL){
	 	dup=strdup(intermediaire);
	 	Music *musicSpitofy = malloc(sizeof(Music));
	 	musicSpitofy->Name= strsep(&dup,",");
	
	 	
	 	musicSpitofy->Artist= strsep(&dup,",");
	 	musicSpitofy->Album= strsep(&dup,",");
	 	musicSpitofy->Genre= strsep(&dup,",");
	 	musicSpitofy->Disc_number= atoi(strsep(&dup,","));
	 	musicSpitofy->Track_number= atoi(strsep(&dup,","));
	 	musicSpitofy->Year= atoi(strsep(&dup,","));
	 	free (dup);

		listeMusic = ajoutFin_r((musicSpitofy),listeMusic);
	}

	 fclose(f);
	return listeMusic;

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
