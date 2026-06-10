#include <stdio.h>

void thread_1 (FILE *fp) {
	fprintf(fp, "data1");
}
void thread_2 (FILE *fp) {
	fprintf(fp, "data2");
}

int main(void) {
	FILE *fp = fopen("data", "a");
	thread_1(fp);
	thread_2(fp);

	return 0;
}
