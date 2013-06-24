#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char kommando[30];
	gets(kommando);
	if (strcmp("Schlage Ball", kommando) == 0)
		printf("Du hast 1 Schlag.");
	return 0;
}
