#include <stdio.h>

#include "scorecard.h"
#include "tracker.h"

#include "eingabe.h"

int main(int argc, char* argv[]) {
	char kommando[30];
	struct scorecard sc = { 0 };

	while(fgets(kommando, sizeof kommando, stdin) != NULL) {
		bereiteAuf(kommando);
		printf("%s\n", reagiereAuf(kommando, &sc));
	}
	return 0;
}
