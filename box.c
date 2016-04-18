#include <stdio.h>

int main(int arg, char *argv[]) {
	int n, x, y;

	printf("What size do you want your square: ");
	scanf("%d", &n);

	for (x=0; x<n; x++) {
		for (y=0; y<n; y++) {
			printf ("x");
		}
	
		printf ("x \n");
	}

	return 0;
}
