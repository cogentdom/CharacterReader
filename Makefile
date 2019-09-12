#----------------------------
#
# Makefile --- File for program 1 cs253
#
# Usage
# 	make all	Build the released product
# 	make clean	Remove build artifacts
#
# Author(s)
# 09/12/2019 Dominik Huffield
#
# ---------------------------

#-----Define names of all object files
	OBJS = cch.o

#-----Define the name of the resulting executable(s)
	EXE = cch

#-----Define options passed by make to the compiler amd which compiler to use
	CFLAGS = -Wall -std=c99
	CC = gcc

#-----Define target "all" for building the executables(s)
all: $(EXE)

#-----Rule for linking the executable product
$(EXE): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJS) $(EXE)
