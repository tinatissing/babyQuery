#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"

/* 
 * Program Name: choice.c
 * Author(s): Tina Tissington
 * Purpose: Find rank, search, or top 10
 */ 

int choice (int decade, struct pNames popNames) {

   	int i = 0;
   	/*struct pNames popNames;*/
	char input[20];
	int names;
	int mRank;
	int fRank;
	int mNumber;
	int fNumber;
	char searchName[100];

	printf ( "Would you like to see a rank, search for a name, or see the top 10? [rank, search, top]\n" );
	fgets (input, 20, stdin);
	
	input[strlen(input)-1] = '\0';

	while (strcmp(input, "rank") != 0 && strcmp(input, "search") != 0 && strcmp(input,"top") != 0) {
		printf ( "You have not chosen one of the given options\n" );
		printf ( "Would you like to see a rank, search for a name, or see the top 10? [rank, search, top]\n" );
		fgets (input, 20, stdin);
	}
	
	if (strcmp(input, "rank") == 0) {
		rank (popNames);
	}
	else if (strcmp(input, "search") == 0) {
		search (decade, popNames);
	}
	else if (strcmp(input, "top") == 0) {
		for ( i=0; i<10; i++ ) {
      			printf ( "%d\t%-14s\t%3d\t%-14s\t%3d\n", popNames.rank[i], popNames.maleName[i], popNames.maleNumber[i], 
                                                     popNames.femaleName[i], popNames.femaleNumber[i] );
  		}
	}

	return (0);
	
}
