#newfile: newfile.o
#	$(CC) -v -o newfile newfile.cpp $(CFLAGS)

#objdumpt -D -S newfile.exe > text

INC = inc
CC = g++
CFLAGS = -v -Wall -I$(INC)

#LIB = lib
SRC = src
ODIR = obj
#LIBS = -lm
LIBS =

_DEPS = Object.hh ObjectFactory.hh
DEPS = $(patsubst %,$(INC)/%,$(_DEPS))

_OBJ = test2.o Object.o ObjectFactory.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: $(SRC)/%.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test2 : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) # $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INC)/*~ *.exe
    