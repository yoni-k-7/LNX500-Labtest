obj-y := main.o
obj-y += debug_of_logging.o

CC=gcc

SOURCES=main.c student_info.c
OBJECTS=main.o student_info.o
BINARY=main.bin

all: $(OBJECTS)
	$(CC) -o $(BINARY) $(OBJECTS)

#% is a wildcard, and @ means target and ^ means dependency
%.o:%.c
	$(CC) -c -o $@ $^

clean:
	rm $(OBJECTS) $(BINARY)
