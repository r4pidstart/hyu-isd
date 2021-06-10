program: main.o pointmath.o
	gcc -v -o program main.o pointmath.o

main.o: main.c
	gcc -v -o main.o main.c

pointmath.o: pointmath.c
	gcc -v -o pointmath.o pointmath.c

clean:
	rm *.o