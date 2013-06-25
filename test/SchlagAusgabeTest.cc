#include "gtest/gtest.h"

#include "scorecard.h"
#include "schlagausgabe.h"

TEST(Schlagausgabe, gibtAnzahlSchlaegeAus) {
	struct scorecard _scorecard = { 1 };
	char* ausgabe = schlagzahl(&_scorecard);

	char* pos = strstr(ausgabe, "1 Schlag");
	ASSERT_GE(pos, ausgabe);
}
