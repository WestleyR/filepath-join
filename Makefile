# Created by: WestleyR
# email: westleyr@nym.hush.com
# Date: Feb 21, 2019
# https://github.com/WestleyR/filepath-join
# version-1.0.1
#
# The Clear BSD License
#
# Copyright (c) 2019 WestleyR
# All rights reserved.
#
# This software is licensed under a Clear BSD License.
#

# your c compiler
CC = gcc

CFLAG =

# your output file
TARGET = example

# locate all the c files
SRC  = $(wildcard src/*.c)

OBJS = filepath-join.o example.o

.PHONY:
all: $(TARGET)

# compile all object files into TARGET
.PHONY:
$(TARGET): $(OBJS)
	$(CC) $(CFLAG) -o $(TARGET) $(OBJS) $(LDFLAGS)

# loop thrught all c files, turning them into object files
.PHONY:
$(OBJS): $(SRC)
	$(CC) -c src/filepath-join.c
	$(CC) -c example.c

.PHONY:
clean:
	rm -f *.o

.PHONY:
test: $(TARGET)
	./test.sh

.PHONY:
cleanall:
	rm -f *.o
	rm -f example

#
# End Makefile
#
