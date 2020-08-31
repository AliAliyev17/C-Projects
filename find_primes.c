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
/*
bool checkPrime(int list[], int index) {
	 int digit = list[index];
	 for(int i=0; i<index; i++) {
	 	if(digit%list[i]==0) {
	 		printf("%d %d %d", digit, list[i], digit%list[i]);
	 	}
	 }
	 return true;
} 

void main() {
	// Create list of 100 numbers
	int list[100];
	for(int i=0; i<100; i++) {
		list[i] = i+1;
	}

	// Print the list
	// printList(list, 100);

	checkPrime(list, 10);
}

*/

void main() {
	const int limit=187;
	int index=1;
	bool append = true;
	int primes[187] = {2};
	for(int n=3; n<limit; n++) {
		for(int ind=0; ind<187; ind++) {
			if(primes[ind]!=0 && n%primes[ind]==0){
				// printf("%d is divisible by %d\n", n, primes[ind]);
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

