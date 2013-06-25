#include "gtest/gtest.h"

#include "scorecard.h"
#include "lochwechsel.h"

TEST(Lochwechsel, gibtNeuesLochAus) {
	struct scorecard sc = { 0, 0 };
	char* ausgabe = naechstesLoch(&sc);

	char* pos = strstr(ausgabe, "1. Loch");
	ASSERT_GE(pos, ausgabe);
}
