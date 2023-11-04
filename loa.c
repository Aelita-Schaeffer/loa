#include <stdio.h>

// defaults
char *default_do = "help";

// parameter parsing here
int main(int argc, char *argv[]) {
	for (int c = 1; c < argc; c++) {
		switch (*argv[c]) {
			default:
				char *default_do = "unknown";
				break;
		}
	}
	printf("%s\n", default_do);
	return 0;
}

/*
switch (default_do) {
	case "help":
		printf("help opt here");
		break;
	case "shell":
		printf("shell main code");
		break;
	default:
		printf("Unknown option, please type %s", fname);
		break;
}
*/
