#include <stdio.h>

int main (int argc, char *argv[]) {
	int n, i;
	float avg;
	int sum=0;

	for (i=0;;i++)
	{
		printf("Please enter an integer: \n");
		scanf("%i", &n);
		printf("Sum is: %i \n", sum);

		printf("i: %i \n", i);

		if (n>0){
			sum = sum + n;
		}
		else {
			avg = (float) (sum/i);
			break;
		}
	}

	printf("Average is: %f \n", avg);
	return 0;
}
