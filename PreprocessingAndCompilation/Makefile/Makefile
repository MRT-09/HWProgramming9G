all: clean help.exe strlength.exe strcompare.exe strconcat.exe

help.exe:
	gcc help.c -o help.exe

mystrings.o: mystrings.c
	gcc -c mystrings.c -o mystrings.o

strlength.exe: strlength.c mystrings.o
	gcc strlength.c mystrings.o -o strlength.exe
strcompare.exe: strcompare.c mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.exe
strconcat.exe: strconcat.c mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.exe

clean:
	del *.o *.exe