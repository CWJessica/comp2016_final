#include <stdio.h>

int main (int argc, char *argv[]) {
	int a,b,c,d,e,f,g,h,i,j, sum;
	float avg;

	printf("Please input 10 integers that you want to average : \n");
	scanf("%i %i %i %i %i %i %i %i %i %i", &a, &b,&c,&d,&e,&f,&g,&h,&i,&j);

	sum=a+b+c+d+e+f+g+h+i+j;
	avg=sum/10;
	printf("average is: %f \n", avg);
	
	return 0;
}
