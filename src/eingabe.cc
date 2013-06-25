#include <string.h>

#include "eingabe.h"

void bereiteAuf(char * str) {
	  size_t last = strlen(str) - 1;
	  if (str[last] == '\n') str[last] = '\0';
}
