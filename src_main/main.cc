#include <stdio.h>

#include "scorecard.h"
#include "tracker.h"

#include "eingabe.h"

#include "befehl.h"
#include "schlag.h"
#include "lochwechsel.h"

int main(int argc, char* argv[]) {
	char kommando[30];
	struct scorecard sc = { 0 };

	struct befehl befehle[] = {
			{"Naechstes Loch", &naechstesLoch},
			{"Schlage Ball", &schlageBall}};

	while(fgets(kommando, sizeof kommando, stdin) != NULL) {
		bereiteAuf(kommando);
		printf("%s\n", reagiereAuf(kommando, befehle, 2, &sc));
	}
	return 0;
}
