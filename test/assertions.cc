#include "gtest/gtest.h"

::testing::AssertionResult StrContains(const char* haystack, const char* needle) {
	const char* pos = strstr(haystack, needle);
	if (pos > haystack) {
		return ::testing::AssertionSuccess();
	}
	return ::testing::AssertionFailure() << "'" << needle << "' not in '" << haystack << "'";
}
