#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"

/* 
 * Program Name: rank.c
 * Author(s): Tina Tissington
 * Purpose: Finds ranking of popular names of a specific gender and decade.
 */ 

int rank (struct pNames popNames) {

   	/*struct pNames popNames;*/

	char input[20];

	printf( "What rank do you wish to see?[1-200]\n" );
	fgets(input, 20, stdin);
	/*input[strlen(input)-1] = '\0';*/
	
	int chosenRank = atoi(input);

	while (chosenRank < 1 || chosenRank > 200) {
		printf( "You did not enter a rank within the range\n" );
		printf( "What rank do you wish to see?[1-200]\n" );
		fgets(input, 20, stdin);
		/*input[strlen(input)-1] = '\0';*/
	
		chosenRank = atoi(input);
	}

	printf( "Would you like to see the male (0), female (1), or both (2) names(s)? [0-2]\n" );
	fgets(input, 20, stdin);
	/*input[strlen(input)-1] = '\0';*/
	
	int names = atoi(input);

	while (names < 0 || names > 2) {
		printf( "You did not enter a value within the accepted range\n" );
		printf( "Would you like to see the male (0), female (1), or both (2) names(s)? [0-2]\n" );
		fgets(input, 20, stdin);
		/*input[strlen(input)-1] = '\0';*/
		
		names = atoi(input);
	}

	if (names == 2) {
		printf( "Male: %s (%d) and Female: %s (%d)\n", popNames.maleName[chosenRank-1], popNames.maleNumber[chosenRank-1], popNames.femaleName[chosenRank-1], popNames.femaleNumber[chosenRank-1]);
	}
	else if (names == 0) {
		printf( "Male: %s (%d)\n", popNames.maleName[chosenRank-1], popNames.maleNumber[chosenRank-1]);
	}
	else {
		printf( "Female: %s (%d)\n", popNames.femaleName[chosenRank-1], popNames.femaleNumber[chosenRank-1]);
	}

	return (0);
	
}


