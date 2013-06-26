#include "gtest/gtest.h"
#include "scorecard.h"
#include "tracker.h"
#include "befehl.h"

char* stubOp(struct scorecard* sc) {
	return "ausgabe";
}
TEST(Tracker, delegiertAnRichtigeOperationWennNurEinBefehlBekannt) {
	struct befehl befehle[] = {{"kommando", &stubOp}};
	char* result = reagiereAuf("kommando", befehle, 1, NULL);
	ASSERT_STREQ("ausgabe", result);
}
char* stubOp2(struct scorecard* sc) {
	return "ausgabe2";
}
TEST(Tracker, delegiertAnOperationFuerKommandoWennMehrereBefehleBekannt) {
	struct befehl befehle[] = {
			{"kommando1", &stubOp},
			{"kommando2", &stubOp2}};

	char* result = reagiereAuf("kommando2", befehle, 2, NULL);

	ASSERT_STREQ("ausgabe2", result);
}
