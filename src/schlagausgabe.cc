#include <stdio.h>
#include <stdlib.h>

#include "schlagausgabe.h"
#include "scorecard.h"

char* schlagzahl(struct scorecard *sc) {
	char* ausgabe = (char*) malloc(20);
	sprintf(ausgabe, "Du hast %d Schlag", sc->schlaege);
	return ausgabe;
}
