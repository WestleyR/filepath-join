# Created by: WestleyR
# email: westleyr@nym.hush.com
# Date: Mar 5, 2019
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

# where to install
PREFIX = /usr/local/bin

MAN_PREFIX = /usr/share/man/man1

# your c compiler
CC = gcc

CFLAG =
LDFLAGS =

TARGET = filepath-join
SRCDIR = src

SRC = $(wildcard $(SRCDIR)/*.c)

ALLFILE = $(notdir $(SRC))
OBJS = $(ALLFILE:.c=.o)

MANPAGE = man/man1/filepath-join.1.gz

.PHONY:
all: $(TARGET)

.PHONY:
$(TARGET): $(OBJS)
	$(CC) $(CFLAG) -o $(TARGET) $(OBJS) $(LDFLAGS)

.PHONY:
$(OBJS): $(SRC)
	$(foreach srcfile, $(SRC), $(CC) $(CFLAGS) -c $(srcfile);)

.PHONY:
clean:
	-rm -f *.o

.PHONY:
test: $(TARGET)
	./tests

.PHONY:
install: $(TARGET)
	cp -f $(TARGET) $(PREFIX)
	-cp -f $(MANPAGE) $(MAN_PREFIX)

.PHONY:
cleanall:
	-rm -f *.o
	-rm -f filepath-join

#
# End Makefile
#
