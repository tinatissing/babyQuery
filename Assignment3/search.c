#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"

/* 
 * Program Name: search.c
 * Author(s): Tina Tissington
 * Purpose: Searching for a name in a specific decade.
 */ 

int search (int decade, struct pNames popNames) {

   	int i = 0;
   	/*struct pNames popNames;*/

	char searchName[100];
	int names;
	char input [10];

	printf( "What name do you wish to search for?\n" );
	fgets(searchName, 100, stdin);
	searchName[strlen(searchName)-1] = '\0';
	
	for (i=0; searchName[i] != '\0'; i++) {
		if (i==0) {
			if (searchName[i] >= 'a' && searchName[i] <= 'z') {
				searchName[i] = searchName[i]-32;
			}
		}
		else {
			if (searchName[i] >= 'A' && searchName[i] <= 'Z') {
				searchName[i] = searchName[i] + 32;
			}
		}
	}

	printf ("Do you wish to search male (0), female (1), or both (2) names? [0-2]\n");
	fgets(input, 4, stdin);
	names = atoi(input);

	while (names < 0 || names > 2) {
		printf( "You did not enter a value within the accepted range\n" );
		printf ("Do you wish to search male (0), female (1), or both (2) names? [0-2]\n");
		fgets(input, 4, stdin);
		names = atoi(input);
	}

	int mRank = 0;
	int fRank = 0;
	int mNumber = 0;
	int fNumber = 0;
	
	for (i=0; i <= 200; i++) {
		if (strcmp(popNames.maleName[i], searchName) == 0) {
			mRank = i+1;
			mNumber = popNames.maleNumber[i];
		}
		else if (strcmp(popNames.femaleName[i], searchName) == 0) {
			fRank = i+1;
			fNumber = popNames.femaleNumber[i];	
		}
	}

	if (names == 2) {
			if (fRank == 0 && mRank == 0) {
				printf ("In %d, both names are not found\n", decade); 
			}
			else if (fRank == 0) {
				printf ("In %d, the female name %s is ranked %d with a count of %d and the male name %s is not ranked\n", decade, searchName, fRank, fNumber, searchName); 
			}
			else if (mRank == 0) {
				printf ("In %d, the male name %s is ranked %d with a count of %d and the female name %s is not ranked\n", decade, searchName, mRank, mNumber, searchName); 
			}
			else {
				printf ("In %d, the female name %s is ranked %d with a count of %d and the male name %s is ranked %d with a count of %d\n", decade, searchName, fRank, fNumber, searchName, mRank, mNumber);
			}
		}
		else if (names == 0) {
			if (mRank == 0) {
				printf ("In %d, the male name %s is not ranked\n", decade, searchName); 
			}
			else {
				printf ("In %d, the male name %s is ranked %d with a count of %d\n", decade, searchName, mRank, mNumber); 
			}
		}
		else {
			if (fRank == 0) {
				printf ("In %d, the female name %s is not ranked\n", decade, searchName); 
			}
			else {
				printf ("In %d, the female name %s is ranked %d with a count of %d\n", decade, searchName, fRank, fNumber); 
			}
		}

	return (0);
	
}
