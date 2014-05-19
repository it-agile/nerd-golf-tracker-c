#include "gtest/gtest.h"

#include "scorecard.h"

extern "C" {
    #include "schlagausgabe.h"
}

TEST(Schlagausgabe, gibtAnzahlSchlaegeAus) {
	struct scorecard sc = { 1 };
	char* ausgabe = schlagzahl(&sc);

	char* pos = strstr(ausgabe, "1 Schlag");
	ASSERT_GE(pos, ausgabe);
}
