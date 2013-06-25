#include <stdio.h>
#include <stdlib.h>

#include "scorecard.h"
#include "lochwechsel.h"

char* naechstesLoch(struct scorecard *sc) {
	sc->loch++;
	char* ausgabe = (char*) malloc(30);
	sprintf(ausgabe, "Du bist jetzt auf dem %d. Loch.", sc->loch);
	return ausgabe;
}
