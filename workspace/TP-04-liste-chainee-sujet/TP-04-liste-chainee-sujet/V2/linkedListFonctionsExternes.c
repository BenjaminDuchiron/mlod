
#include <stdio.h>
#include <stdlib.h>
#include "linkedListOfMusic.h"

void afficheElement(Element e) {
	Music m = *((Music*) e);
	printf("%s%s",m.Name,",");
	printf("%s%s",m.Artist,",");
	printf("%s%s",m.Album,",");
	printf("%s%s",m.Genre,",");
	if (m.Disc_number!=-1){
	printf("%i%s",m.Disc_number,",");
	}
	else{
		printf("%s",",");
	}
	if (m.Track_number!=-1){
	printf("%i%s",m.Track_number,",");
	}
	else{
		printf("%s",",");
	}
	if (m.Year!=-1){
	printf("%i",m.Year);
	}
}


void detruireElement(Element e) {}

// compare deux Elements
bool equalsElement(Element e1, Element e2){
	Music m2 = *((Music*) e2);
	Music m1 = *((Music*) e1);
	return((strcmp( m1.Name,m2.Name)==0) 
	&& (strcmp( m1.Artist,m2.Artist)==0)
	&& (strcmp( m1.Album,m2.Album)==0)
	&& (strcmp( m1.Genre,m2.Genre)==0)
	&& ( m1.Disc_number==m2.Disc_number)
	&& ( m1.Track_number==m2.Track_number)
	&& ( m1.Year==m2.Year));
	
	}
