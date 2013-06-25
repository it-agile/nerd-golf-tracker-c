#include <stdio.h>
#include <stdlib.h>

#include "tracker.h"
#include "schlag.h"
#include "scorecard.h"


char* reagiereAuf(char const* eingabe, struct scorecard *sc) {
	return schlageBall(sc);
}
