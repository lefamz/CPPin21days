PROGRAMNAME=cppIn21days

# directory for source files
IDIR=src

# directory for *.o files
ODIR=obj

CC=g++
CFLAGS=-O2


# dependencies 
_OBJ=Main.o day08.o day09.o day10.o day11.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

_HEAD=Main.hpp day08.hpp day09.hpp day10.hpp day11.hpp
HEAD=$(patsubst %,$(IDIR)/%,$(_HEAD))

# these targets are not linked to any file
.PHONY: build
.PHONY: clean

# $@ left side from .
# $< first item in dependencies list
$(ODIR)/%.o: $(IDIR)/%.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

build: $(PROGRAMNAME)

clean:
	rm -f $(ODIR)/*.o $(PROGRAMNAME)

$(PROGRAMNAME): $(OBJ)
	$(CC) -o $(PROGRAMNAME) $^ $(CFLAGS)

