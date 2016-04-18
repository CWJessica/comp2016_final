#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

        int c1 = 0, c2=0,c3=0, c4=0, c5=0, c6=0;
        int number = 0, i = 0;

        char lines[100];
        FILE *fp = fopen("values.txt", "r");

        while(fgets(lines,100,fp) != NULL) {
                lines[strlen(lines)-1] = '\0';
                number = atoi(lines);

		//if (number == NULL) continue;
                if (number > 500) c1++;
                if (number >=400 && number <= 500) c2++;
                if (number >=300 && number <400) c3++;
                if (number >=200 && number <300) c4++;
                if (number >=100 && number <200) c5++;
                if (number >=0 && number <100) c6++;
        }

//        printf("c1: %i \n", c1 );
//        printf("c2: %i \n", c2 );
//        printf("c3: %i \n", c3 );
//        printf("c4: %i \n", c4 );
//        printf("c5: %i \n", c5 );

        for(i=0; i<c1; i++) {
		if (i==0) printf("c1: x");
		else if (i==0 && c1>1) printf ("c1: x \n");
		else if (i == c1-1) printf("x \n");
		else printf("x");
        }

	for(i=0; i<c2; i++) {
                if (i==0 && c2==1) printf("c2: x \n");
		else if (i==0 && c2>1) printf ("c2: x");
		else if (i == c2-1) printf("x \n");
                else printf("x");
        }

	for(i=0; i<c3; i++) {
		if (i==0 && c3 ==1) printf("c3: x \n");
		else if (i==0 && c3>1) printf ("c3: x");
                else if (i == c3-1) printf("x \n");
                else printf("x");
        }

        for(i=0; i<c4; i++) {
                if (i==0 && c4 ==1) printf("c4: x \n");
		else if (i==0 && c4>1) printf ("c4: x");
		else if (i == c4-1) printf("x \n");
                else printf("x");
        }

        for(i=0; i<c5; i++) {
                if (i==0 && c5==1) printf ("c5: x \n");
		else if (i==0 && c5>1) printf ("c5: x");
		else if (i == c5-1) printf("x \n");
                else printf("x");
        }

        for(i=0; i<c6; i++) {
                if (i==0 && c6 ==1) printf("c6: x\n");
		else if (i==0 && c6>1) printf ("c6: x");
		else if (i == c6-1) printf("x \n");
                else printf("x");
        }
}

