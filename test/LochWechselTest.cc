#include "gtest/gtest.h"
#include "assertions.h"

#include "scorecard.h"

extern "C" {
    #include "lochwechsel.h"
}

TEST(Lochwechsel, gibtNeuesLochAus) {
	struct scorecard sc = { 0, 0 };
	const char* ausgabe = naechstesLoch(&sc);

	ASSERT_TRUE(StrContains(ausgabe, "1. Loch"));
}
