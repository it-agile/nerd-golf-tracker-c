#include "gtest/gtest.h"
#include "tracker.h"

TEST(Tracker, reagiertAufEingabe) {
	ASSERT_STREQ("Du hast 1 Schlag", reagiereAuf("Schlage Ball"));
}
