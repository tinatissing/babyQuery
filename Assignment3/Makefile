babyQuery: babyQuery.o removeCommas.o choice.o rank.o search.o
	gcc -ansi -Wall -o babyQuery babyQuery.o removeCommas.o choice.o rank.o search.o

babyQuery.o: babyQuery.c
	gcc -ansi -Wall -c babyQuery.c

removeCommas.o: removeCommas.c
	gcc -ansi -Wall -c removeCommas.c

choice.o: choice.c
	gcc -ansi -Wall -c choice.c 

rank.o: rank.c
	gcc -ansi -Wall -c rank.c

search.o: search.c
	gcc -ansi -Wall -c search.c

clean:
	rm babyQuery babyQuery.o removeCommas.o choice.o rank.o search.o top.o


