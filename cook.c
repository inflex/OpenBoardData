#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char **argv ) {
	char line[102400];
	char id[1024];
	int state = 0;
	FILE *f;

	if ( argc != 2 ) {
		fprintf(stderr,"Usage: ./cook <input file>\n\n");
		exit(1);
	}

	f = fopen(argv[1], "r");
	if (!f) return 1;
	while (fgets(line,sizeof(line),f)) {
		char *p;

		if (*line == '#') continue;
		if (*line == ' ') continue;
		if (*line == '\0') continue;
		if (strncmp(line, "BRAND", 5)==0) continue;
		if (strncmp(line, "TYPE", 4)==0) continue;
		if (strncmp(line, "COMMENT", 7)==0) continue;

		p = strrchr(line,'\n'); if (p) *p = '\0';
		p = strrchr(line,'\r'); if (p) *p = '\0';

		switch (state) {
			case 0:
				if (strncmp(line, "ID ", 3)==0) {
					snprintf(id, sizeof(id), "%s", line +3);

					state = 1;
				}
				break;

			case 1:
				fprintf(stdout,"%s %s\n", id, line);
				break;
		}
	}
	fclose(f);

	return 0;
}
