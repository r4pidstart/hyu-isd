program : add.o main.o
	gcc -o program add.o main.o

a.o : add.c
	gcc -c -o add.o add.c

main.o : main.c
	gcc -c -o main.o main.c

clean:
	rm *.o