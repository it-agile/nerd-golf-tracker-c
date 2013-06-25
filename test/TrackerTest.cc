#include "gtest/gtest.h"
#include "scorecard.h"
#include "tracker.h"

TEST(Tracker, reagiertAufEingabe) {
	struct scorecard sc = { 0 };
	ASSERT_STREQ("Du hast 1 Schlag", reagiereAuf("Schlage Ball", &sc));
}
