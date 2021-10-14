/**
 Compilation
 gcc --std=c99 -W -Wall -o prixTuring prixTuring.c

 Exécution
 ./prixTuring < turingWinners.txt > out.txt

 Tests
 diff out.txt turingWinners.txt

 Détection de fuites mémoires
 valgrind --leak-check=yes --leak-check=full --show-leak-kinds=all --show-reachable=no ./prixTuring < turingWinners.txt > out.txt
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* This function scans a line of text (until \n) and returns a char* that contains all characters on the line (up to 255) excluding \n.
It also ensures the \0 termination.
**WARNING**: The result of this function has been allocated (calloc) by the function */
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

/* This function scans a line of text (until \n), converts it as an integer and returns this integer */
int scanLineAsInt() {
	int buf;
	scanf("%i\n",&buf);
	return buf;
}

struct winner {
	int Year;
	char *Name;
	char *Description;
};

typedef struct winner winner;

winner** readWinner(){
	winner **output = malloc(sizeof(winner* ) * 50);
	for (int i = 0; i < 50; i++) {
		output[i] = malloc(sizeof(winner));
		output[i]->Year = scanLineAsInt();
		output[i]->Name = scanLine();
		output[i]->Description = scanLine();
	}
	return output;

}

void printWinner(){
	winner ** output = readWinner();
	//FILE*f;
	//f =fopen(out,"w");
	for(int i= 0; i<50; i++){
		//int putc(output[i],FILE*f);
		printf("%i\n",output[i]->Year );
		printf("%s\n",output[i]->Name );
		printf("%s\n",output[i]->Description );
	}
}
	

int main(void)
{	
	//int nbGagnants = scanLineAsInt();
	printWinner();
	// for (int i =0 ; i<= (50);i++){
	// 	int winnerYear =scanLineAsInt();
	// 	printf("%i\n",winnerYear);

	// 	char *winnerName =scanLine();
	// 	printf("%s\n",winnerName);

	// 	char *winnerDescription =scanLine();
	// 	printf("%s\n",winnerDescription);
	// }
	
	//printf("nbGagnants = %i\n",nbGagnants);

	return EXIT_SUCCESS;
}
