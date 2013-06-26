#include <stdlib.h>
#include <string.h>

#include "tracker.h"
#include "scorecard.h"
#include "befehl.h"

char* reagiereAuf(char const* eingabe, struct befehl befehle[], size_t anzahlBefehle, struct scorecard * sc) {
	for (size_t i=0; i<anzahlBefehle; i++) {
		struct befehl einBefehl = befehle[i];
		if (strcmp(einBefehl.kommando, eingabe) == 0)
			return einBefehl.operation(sc);
	}
}
