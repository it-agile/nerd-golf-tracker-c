#include <string.h>

#include "tracker.h"
#include "scorecard.h"

#include "schlag.h"
#include "lochwechsel.h"

char* reagiereAuf(char const* eingabe, struct scorecard *sc) {
	if (strcmp("Naechstes Loch", eingabe) == 0)
		return naechstesLoch(sc);
	return schlageBall(sc);
}
