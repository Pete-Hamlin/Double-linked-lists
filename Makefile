CC=g++
CFLAGS=-c -Wall -g
LDFLAGS= -g
VPATH=src:
BINDIR=bin

SRC=main.cc linked_list.cc node.cc
OBJ=$(SRC:.cpp=.o)
TARGET=$(BINDIR)/linked_list

RM=rm -f

all: $(SRC) $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(TARGET) $(OBJ)
