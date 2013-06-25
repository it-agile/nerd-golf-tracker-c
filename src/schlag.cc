#include "scorecard.h"
#include "schlagausgabe.h"

char* schlageBall(struct scorecard *sc) {
	sc->schlaege++;
	return schlagzahl(sc);
}
