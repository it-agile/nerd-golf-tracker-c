#include "gtest/gtest.h"

#include "scorecard.h"

extern "C" {
    #include "tracker.h"
}

TEST(Tracker, reagiertAufEingabe) {
	struct scorecard sc = { 0 };
	ASSERT_STREQ("Du hast 1 Schlag", reagiereAuf("Schlage Ball", &sc));
}

TEST(Tracker, reagiertAufNaechstesLoch) {
	struct scorecard sc = { 0, 0 };
	char* ausgabe = reagiereAuf("Naechstes Loch", &sc);

	char* pos = strstr(ausgabe, "1. Loch");
	ASSERT_GE(pos, ausgabe);
}
