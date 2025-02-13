all: clean main.exe

main.exe: quadricroots.o main.o
	gcc quadricroots.o main.o -o main.exe -lm

quadricroots.o: quadricroots.c quadricroots.h
	gcc -c quadricroots.c -o quadricroots.o

main.o: main.c quadricroots.h
	gcc -c main.c -o main.o

clean:
	del *.o *.exe