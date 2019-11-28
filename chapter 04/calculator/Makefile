calc: main.o stack.o getop.o ungetch.o
	cc -o calc main.o stack.o getop.o ungetch.o

main.o: main.c
	cc -c main.c

stack.o: stack.c stack.h
	cc -c stack.c

getop.o: getop.c getop.h ungetch.o
	cc -c getop.c

ungetch.o: ungetch.c ungetch.h
	cc -c ungetch.c

clean:
	rm calc *.o
