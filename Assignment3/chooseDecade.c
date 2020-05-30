#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"
#include <string.h>

/*
 * Program Name: chooseDecade.c
 * Author(s): Tina Tissington
 * Purpose: Prompt user for a decade to get information from. 
 */

int chooseDecade () {

	char input[20];
	int decade = 0;

	printf ( "What decade would you like to look at? [1880 to 2010]\n" );
	fgets (input, 10, stdin);

	decade = atoi(input);

	while (decade < 1880 || decade > 2010) {
		printf ( "The decade you have chosen is not within the range 1880 - 2010\n" );
		printf ( "What decade would you like to look at? [1880 to 2010]\n" );
		fgets (input, 20, stdin);
		decade = atoi(input);
	}

	char fileName;
	if (decade == 1880) {
		fileName = "1880Names.txt";
	}
	else if (decade == 1890) {
		fileName = "1890Names.txt";
	}
	else if (decade == 1900) {
		fileName = "1900Names.txt";
	}
	else if (decade == 1910) {
		fileName = "1910Names.txt";
	}
	else if (decade == 1920) {
		fileName = "1920Names.txt";
	}
	else if (decade == 1930) {
		fileName = "1930Names.txt";
	}
	else if (decade == 1940) {
		fileName = "1940Names.txt";
	}
	else if (decade == 1950) {
		fileName = "1950Names.txt";
	}
	else if (decade == 1960) {
		fileName = "1960Names.txt";
	}
	else if (decade == 1970) {
		fileName = "1970Names.txt";
	}
	else if (decade == 1980) {
		fileName = "1980Names.txt";
	}
	else if (decade == 1990) {
		fileName = "1990Names.txt";
	}
	else if (decade == 2000) {
		fileName = "2000Names.txt";
	}
	else {
		fileName = "2010Names.txt";
	}

	return ( decade, fileName );
	
}
