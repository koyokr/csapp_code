CC = gcc
CFLAGS = -I../include/ -O2
TARGETS = hello waitpid

all: $(TARGETS)

hello: hello.s
	$(CC) $(CFLAGS) -o $@ $^

waitpid: waitpid.c csapp.o
	$(CC) $(CFLAGS) -o $@ $^ -pthread

csapp.o: ../src/csapp.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(TARGETS) *.o
