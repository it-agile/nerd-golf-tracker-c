#include "gtest/gtest.h"

#include "scorecard.h"
#include "lochwechsel.h"

::testing::AssertionResult StrContains(char* haystack, char* needle) {
	char* pos = strstr(haystack, needle);
	if (pos > haystack) {
		return ::testing::AssertionSuccess();
	}
	return ::testing::AssertionFailure() << "'" << needle << "' not in '" << haystack << "'";
}

TEST(Lochwechsel, gibtNeuesLochAus) {
	struct scorecard sc = { 0, 0 };
	char* ausgabe = naechstesLoch(&sc);

	ASSERT_TRUE(StrContains(ausgabe, "1. Loch"));
}
