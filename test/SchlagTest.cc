#include "gtest/gtest.h"
#include "scorecard.h"
#include "schlag.h"

TEST(Schlag, erhoehtAnzahlSchlaege) {
	struct scorecard sc = { 0 };
	schlageBall(&sc);
	ASSERT_EQ(1, sc.schlaege);
}
