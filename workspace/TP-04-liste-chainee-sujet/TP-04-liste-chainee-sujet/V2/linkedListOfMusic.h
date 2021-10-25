#pragma once

#include <stdbool.h>
#include "../V1-correction/linkedList.h"
// ============
// Types
// ============


struct Music {
	char *Name;
	char *Artist;
	char *Album;
	char *Genre;
	int Disc_number;
	int Track_number;
	int Year;
};

typedef struct Music Music;



// ============
// External Functions
// ============



// ============
// Exported Functions
// ============

// fonction utile du tp turing

char* scanLine();

int scanLineAsInt();

Liste readMusic();



