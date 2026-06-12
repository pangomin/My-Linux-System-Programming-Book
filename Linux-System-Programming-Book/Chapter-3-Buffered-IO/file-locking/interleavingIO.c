#include <stdio.h>
#include <pthread.h>

void* thread_1 (void* arg) {
	FILE *fp = (FILE*)arg;

	// Make threads work for a period
	for (int i = 0; i < 10; i++) {
	fprintf(fp, "A");
	fflush(fp);
	usleep(200);
	}
	return NULL;
}
void* thread_2 (void *arg) {
	FILE *fp = (FILE*)arg;

	for (int i = 0; i < 10; i++) {
	fprintf(fp, "B");
	fflush(fp);
	usleep(200);
	}
	return NULL;
}

int main(void) {
	pthread_t t1, t2;
	FILE *fp = fopen("data", "a");
	if (fp == NULL) {
		perror("fopen");
		return 1;
	}
	pthread_create(&t1, NULL, thread_1, fp);
	pthread_create(&t2, NULL, thread_2, fp);

	// Wait till they finish their job
	pthread_join(t1, NULL);
    pthread_join(t2, NULL);

	fclose(fp);

	return 0;
}
