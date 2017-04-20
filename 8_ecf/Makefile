CC = gcc
CFLAGS = -I../include/ -O2 -pthread
TARGETS = waitpid1 waitpid2 shellex kill sigint

all: $(TARGETS)


waitpid1: waitpid1.c csapp.o
	$(CC) $(CFLAGS) -o $@ $^

waitpid2: waitpid2.c csapp.o
	$(CC) $(CFLAGS) -o $@ $^

shellex: shellex.c csapp.o
	$(CC) $(CFLAGS) -o $@ $^

kill: kill.c csapp.o
	$(CC) $(CFLAGS) -o $@ $^

sigint: sigint.c csapp.o
	$(CC) $(CFLAGS) -o $@ $^

csapp.o: ../src/csapp.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(TARGETS) *.o
