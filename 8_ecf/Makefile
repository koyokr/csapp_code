CC = gcc
CFLAGS = -I../include/ -O2
TARGETS = hello waitpid1 waitpid2 shellex kill sigint signal1 signal2 \
	  procmask1 procmask2 waitforsignal sigsuspend setjmp restart
LIBS = ./libcsapp.so -pthread

all: $(TARGETS)

hello: hello.s
	$(CC) $(CFLAGS) -o $@ $<

waitpid1: waitpid1.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

waitpid2: waitpid2.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

shellex: shellex.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

kill: kill.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

sigint: sigint.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

signal1: signal1.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

signal2: signal2.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

procmask1: procmask1.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

procmask2: procmask2.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

waitforsignal: waitforsignal.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

sigsuspend: sigsuspend.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

setjmp: setjmp.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

restart: restart.c libcsapp.so
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

libcsapp.so: ../src/csapp.c
	$(CC) $(CFLAGS) -shared -fpic -o $@ $<

clean:
	rm -f $(TARGETS) *.o *.so
