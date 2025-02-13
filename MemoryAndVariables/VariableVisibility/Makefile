all: taskmanager.exe

taskmanager.exe: processes.o taskmanager.c
	gcc processes.o taskmanager.c -o taskmanager.exe

processes.o: processes.h processes.c
	gcc -c processes.c -o processes.o

clean:
	del /q *.o *.exe