all: hw3prob1.o hw3prob5.o
	gcc -o hw3 hw3prob1.o hw3prob5.o

hw3prob1.o: hw3prob1.c
	gcc -c hw3prob1.c

hw3prob5.c: hw3prob5.c
	gcc -c hw3prob5.c

run: hw3
	./hw3
