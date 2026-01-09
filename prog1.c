#include <stdio.h> // for printf()
#include <stdlib.h> // for srand()
#include <time.h> // for time()


int main() {
	// seed PRNG (# seconds since UNIX epoch: January 1, 1970)
	srand(time(NULL));

	// create random var
	int myrand = rand() % 11;
	
	// conditions and outputs
	if(myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	}	

	else if (myrand <= 9) {
		printf("FRODO LIVES\n");
	}
	
	else {
		printf("Larn is the best roguelike\n");
	}

	printf("The random number was: %d\n", myrand);
}