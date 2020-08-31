#include <stdio.h>
#include <stdbool.h>



// This function prints the elements of array separated by whitespaces.
void printList(int list[], int size) {
	printf("Number of elements printed is %d.\n", size);
	int i;
	for(i=0; i<size; i++) {
		if(list[i]!=0 && list[i+1]!=0 && list[i+2]!=0) {printf("%d ", list[i]);}
	}
	printf("\n");
}

void main() {
	const int limit=187;
	int index=1;
	bool append = true;
	int primes[187] = {2};
	for(int n=3; n<limit; n++) {
		for(int ind=0; ind<187; ind++) {
			if(primes[ind]!=0 && n%primes[ind]==0){
				append=false;
			}
		}
		if(append) {
			primes[index]=n;
			index++;
		}
		append=true;
	}
	printf("\n");
	printList(primes, limit);
}
