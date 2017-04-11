CC = gcc
AR = ar
CFLAGS = -W -Wall

TARGETS = prog prog2c prog2l prog2r foobar3 foobar4 foobar5

VECTOR_LIBRARY = libvector
VECTOR_SOURCES = addvec.c multvec.c
VECTOR_OBJECTS = addvec.o multvec.o


all: $(TARGETS)


prog: main.c sum.c
	$(CC) $(CFLAGS) -O2 -o $@ $^

prog2c: main2.c $(VECTOR_LIBRARY).a
	$(CC) $(CFLAGS) -O0 -static -o $@ $^

prog2l: main2.c $(VECTOR_LIBRARY).so
	$(CC) $(CFLAGS) -O0 -o $@ $^
	
prog2r: dll.c
	$(CC) $(CFLAGS) -O2 -rdynamic -o $@ $^ -ldl


foobar3: foo3.c bar3.c
	$(CC) $(CFLAGS) -O2 -o $@ $^

foobar4: foo4.c bar4.c
	$(CC) $(CFLAGS) -O2 -o $@ $^

foobar5: foo5.c bar5.c
	$(CC) $(CFLAGS) -O2 -o $@ $^

foobar6: foo6.c bar6.c
	$(CC) $(CFLAGS) -O2 -o $@ $^


$(VECTOR_LIBRARY).a: $(VECTOR_OBJECTS)
	$(AR) rcs $@ $^

$(VECTOR_LIBRARY).so: $(VECTOR_SOURCES)
	$(CC) $(CFLAGS) -O2 -shared -fpic -o $@ $^

$(VECTOR_OBJECTS): $(VECTOR_SOURCES)
	$(CC) $(CFLAGS) -O2 -c $?


clean:
	rm -f $(TARGETS) *.o *.a *.so
