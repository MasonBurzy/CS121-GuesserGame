#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// start main

int main(){
	char name [20];
	int correct ; 
	srand(time(NULL));

	printf("Please enter your name: ");
	scanf("%s", name);
	printf("Nice to mee you %s! Let's play a game. \n", name);

} 

// end  main


