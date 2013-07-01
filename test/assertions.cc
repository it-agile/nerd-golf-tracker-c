#include "gtest/gtest.h"

::testing::AssertionResult StrContains(char* haystack, char* needle) {
	char* pos = strstr(haystack, needle);
	if (pos > haystack) {
		return ::testing::AssertionSuccess();
	}
	return ::testing::AssertionFailure() << "'" << needle << "' not in '" << haystack << "'";
}
