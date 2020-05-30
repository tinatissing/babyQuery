#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "babies.h"

/*
	Program Name: babyQuery.c
	Author: Tina Tissington
	Last Update: Nov. 6, 2019
	Function:
	Compilation: gcc -ansi -o babyQuery babyQuery.c
	Execution: ./babyQuery
*/

int main ( int argc, char *argv[] ) {
	
	FILE *f1;
   	int i = 0;
   	struct pNames popNames;
   	char maleSNumber[20];
   	char femaleSNumber[20];
   	char string[100];
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

	if (decade == 1880) {
		if ( (f1 = fopen("1880Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1880Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1890) {
		if ( (f1 = fopen("1890Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1890Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1900) {
		if ( (f1 = fopen("1900Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1900Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1910) {
		if ( (f1 = fopen("1910Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1910Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1920) {
		if ( (f1 = fopen("1920Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1920Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1930) {
		if ( (f1 = fopen("1930Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1930Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1940) {
		if ( (f1 = fopen("1940Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1940Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1950) {
		if ( (f1 = fopen("1950Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1950Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1960) {
		if ( (f1 = fopen("1960Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
    
				removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1960Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1970) {
		if ( (f1 = fopen("1970Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1970Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1980) {
		if ( (f1 = fopen("1980Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1980Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1990) {
		if ( (f1 = fopen("1990Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1990Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 2000) {
		if ( (f1 = fopen("2000Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 2000Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else {
		if ( (f1 = fopen("2010Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 2010Names.txt\n" );
   	   		return ( -2 );
   		}
	}

	choice(decade, popNames);

	printf("Do you want to ask another question about %d? [Y or N]\n", decade);
	fgets (input, 4, stdin);
	input[strlen(input)-1] = '\0';

	int a = 0;
	while ((a = 0)) {
		if ((strcmp(input, "Y") == 0)) {
			a=1;
			choice(decade);
		}
		else if ((strcmp(input, "N") == 0)) {
			a++;
			printf("Would you like to select another year?[Y or N]\n");
			fgets (input, 4, stdin);
			input[strlen(input)-1] = '\0';

			if (strcmp(input, "Y") == 0) {
				choice(decade);
			}
			else if (strcmp(input, "N") == 0) {
				printf("Would you like to select another year?[Y or N]\n");
				fgets (input, 4, stdin);
				input[strlen(input)-1] = '\0';

				if (strcmp(input, "Y") == 0) {
					printf ( "What decade would you like to look at? [1880 to 2010]\n" );
					fgets (input, 10, stdin);
					input[strlen(input)-1] = '\0';

					decade = atoi(input);
				}
				else {
					printf("Thank you for using babyQuery\n");
					return (1);
				}
			}
		else {
			printf("Do you want to ask another question about %d? [Y or N]\n", decade);
			fgets (input, 4, stdin);
			input[strlen(input)-1] = '\0';

			if (strcmp(input, "Y") == 0) {
				choice(decade);
			}
			else {
				printf("Thank you for using babyQuery\n");
				return (1);
			}
		}

	}
}
	

	while (decade < 1880 || decade > 2010) {
		printf ( "The decade you have chosen is not within the range 1880 - 2010\n" );
		printf ( "What decade would you like to look at? [1880 to 2010]\n" );
		fgets (input, 20, stdin);
		decade = atoi(input);
	}

	if (decade == 1880) {
		if ( (f1 = fopen("1880Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1880Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1890) {
		if ( (f1 = fopen("1890Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1890Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1900) {
		if ( (f1 = fopen("1900Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1900Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1910) {
		if ( (f1 = fopen("1910Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1910Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1920) {
		if ( (f1 = fopen("1920Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1920Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1930) {
		if ( (f1 = fopen("1930Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1930Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1940) {
		if ( (f1 = fopen("1940Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1940Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1950) {
		if ( (f1 = fopen("1950Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1950Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1960) {
		if ( (f1 = fopen("1960Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1960Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1970) {
		if ( (f1 = fopen("1970Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1970Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1980) {
		if ( (f1 = fopen("1980Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1980Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 1990) {
		if ( (f1 = fopen("1990Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 1990Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else if (decade == 2000) {
		if ( (f1 = fopen("2000Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 2000Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	else {
		if ( (f1 = fopen("2010Names.txt", "r")) != NULL ) {
			while ( fgets(string, 100, f1) != NULL ) {
         			sscanf (string, "%d %s %s %s %s", &popNames.rank[i], popNames.maleName[i], maleSNumber, popNames.femaleName[i], femaleSNumber);
         			removeCommas ( maleSNumber );
         			removeCommas ( femaleSNumber );
         			popNames.maleNumber[i] = atoi ( maleSNumber );
         			popNames.femaleNumber[i] = atoi ( femaleSNumber );
         			i++;
      			}
   		} else {
   			printf ( "Cannot open 2010Names.txt\n" );
   	   		return ( -2 );
   		}
	}
	

	return(0);
}
