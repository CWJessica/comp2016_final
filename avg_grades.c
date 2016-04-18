#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	int number, i=0;
	float sum=0;
	float avg;

	FILE *file = fopen("grades.txt", "r");
	
	char input[100];

	while (fgets(input,100,file) != NULL) {
		input[strlen(input)-1] = '\0';
		number = atoi(input);
		sum = sum + number;
		i++;
	}

	//printf("sum: %f", sum);
	//printf("i: %i", i);
	
	avg = (float) sum / (i);
	printf("Average grade: %.2f \n", avg);

	return 0;
}

