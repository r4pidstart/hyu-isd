program: main.o pointmath.o
	gcc -o program main.o pointmath.o

main.o: main.c
	gcc -c -o main.o main.c

pointmath.o: pointmath.c
	gcc -c -o pointmath.o pointmath.c

clean:
	rm *.o