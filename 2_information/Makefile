SOURCES = $(shell echo *.c)
TARGETS = $(SOURCES:.c=)

all: $(SOURCES)
	for target in $(?:.c=); do \
	$(MAKE) $$target; \
	done

clean:
	rm $(TARGETS)
