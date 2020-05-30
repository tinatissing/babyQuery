#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"

/* 
 * Program Name: removeCommas.c
 * Author(s): Tina Tissington
 * Purpose: Remove commas from each line.
 */ 

int removeCommas ( char *number ) {

	int x = 0;
	char character;
	int total = 0;

	int numLength = strlen (number);
		
	for (x=0; x<numLength; x++){
		character = number[x];
	
		if ((character == ',')) {
			for (; x < numLength; x++) {
				number[x] = number[x+1];
			}
			total++;
		}

	}
	
	return (total);
}

