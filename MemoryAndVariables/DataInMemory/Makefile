all: clean safeadd.exe safesub.exe safemul.exe safediv.exe

safeint.o: safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

safeadd.exe: safeint.o
	gcc safeadd.c safeint.o -o safeadd.exe
safesub.exe: safeint.o
	gcc safesub.c safeint.o -o safesub.exe
safemul.exe: safeint.o
	gcc safemul.c safeint.o -o safemul.exe
safediv.exe: safeint.o
	gcc safediv.c safeint.o -o safediv.exe

clean:
	del -f *.o *.exe