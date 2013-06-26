struct befehl {
	char* kommando;
	char* (*operation)(struct scorecard*);
};
