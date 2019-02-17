# Created by: WestleyR
# email: westleyr@nym.hush.com
# Date: Feb 16, 2019
# https://github.com/WestleyR/filepath-join
# version-1.0.0
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
	rm -f example

