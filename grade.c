#include <stdio.h>

int main (int argc, int *argv[]) {
	float g;

	printf("Please print yuor grade (eg. 85.0): ");
	scanf("%f", &g);

	if (g >= 85.0) {
		printf("A \n");
	}
	else if (g>=75.0 && g <85.0) {
		printf("B \n");
	}
	else if (g>=65.0 && g<75.0) {
		printf("C \n");
	}
	else if (g>=55.0 && g<75.0) {
		printf("D \n");
	}

	if (g<65.0)
	{
		printf("You failed the course :( \n");
	}

	return 0;
}

