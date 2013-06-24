#include <stdio.h>

#include "tracker.h"

int main(int argc, char* argv[]) {
	char kommando[30];
	gets(kommando);
	printf(reagiereAuf(kommando));
	return 0;
}
