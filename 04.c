#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v6.4: OK.\n");
	srand(time(0));
	
	int i,a[20];
	
	for(i=0;i<20;i++) {
		a[i]=rand()%20+1;
		if(i==19) {
			printf("%d", a[i]);
		} else {
			printf("%d, ", a[i]);
		}
	}
	
	printf("\nNew position of elements:\n");
	
	for(i=0;i<19;i++) {
		a[i]=a[i+1];
		printf("%d, ", a[i]);
	}
	
	a[19] = 0;
	printf("%d\n",a[19]);
	
	return 0;
}
