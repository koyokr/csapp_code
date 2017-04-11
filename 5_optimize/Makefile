CC = gcc
CFLAGS = -W -Wall -mavx2 -O1 -S
TARGETS = lower.s set_row.s simd.s sum.s sum_rows.s vec.s


all: $(TARGETS)


lower.s: lower.c
	$(CC) $(CFLAGS) -o $@ $^

set_row.s: set_row.c
	$(CC) $(CFLAGS) -o $@ $^

simd.s: simd.c
	$(CC) $(CFLAGS) -o $@ $^

sum.s: sum.c
	$(CC) $(CFLAGS) -o $@ $^

sum_rows.s: sum_rows.c
	$(CC) $(CFLAGS) -o $@ $^

vec.s: vec.c
	$(CC) $(CFLAGS) -o $@ $^


clean:
	rm -f $(TARGETS)
