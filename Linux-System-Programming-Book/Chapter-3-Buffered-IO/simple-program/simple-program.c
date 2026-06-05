#include <stdio.h>

int main (void) {
	FILE *in, *out;
	typedef struct pirate {
		char name[100];
		unsigned long booty;
		unsigned int bread_len;
	} pirate;
	pirate p;
	pirate blackbeard = {"Edward Teach", 950, 48};

	out = fopen("data", "w");
	if (!out) {
		perror("fopen");
		return 1;
	}
	printf("size of pirate: %lu\n", sizeof(pirate));
	/* if (!fwrite(&blackbeard, 1, sizeof(pirate), out))
	 * writes 120 elements, each 1 byte long *Also valid* */
	if (!fwrite(&blackbeard, sizeof(pirate), 1, out)) {
		perror ("fwrite");
		return 1;
	}
	if (fclose(out)) {
		perror("fclose");
		return 1;
	}
	in = fopen("data", "r");
	if (!in) {
		perror("fopen");
		return 1;
	}
	if (!fread(&p, sizeof(pirate), 1, in)) {
		perror("fread");
		return 1;
	}
	if (fclose(in)) {
		perror("fclose");
		return 1;
	}
	printf("name=\"%s\" booty=%lu bread_len=%u\n",
			p.name, p.booty, p.bread_len);
	return 0;
}
