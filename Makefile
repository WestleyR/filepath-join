# your c compiler
CC = gcc

CFLAG = -I src

# your output file
TARGET = example

# locate all the c files
SRC  = $(wildcard src/*.c)

OBJS = filepath_join.o example.o

.PHONY:
all: $(TARGET)

# compile all object files into TARGET
.PHONY:
$(TARGET): $(OBJS)
	$(CC) $(CFLAG) -o $(TARGET) $(OBJS) $(LDFLAGS)

# loop thrught all c files, turning them into object files
.PHONY:
$(OBJS): $(SRC)
	$(CC) -c src/filepath_join.c
	$(CC) -c example.c


.PHONY:
clean:
	rm -f *.o

