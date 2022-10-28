CC=g++
CFLAGS=-g
SRC=app/src
OBJ=obj
SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
FRAMEWORK=-std=c++17 -framework Cocoa -framework OpenGL -framework IOKit -lglfw3

BINDIR=bin
BIN = $(BINDIR)/main
SUBMITNAME=GameEngine.zip

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(FRAMEWORK)

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) -r $(BINDIR)/* $(OBJ)/* 

submit:
	$(RM) $(SUBMITNAME)
	zip $(SUBMITNAME) $(BIN)

release: CFLAGS=-Wall -O2 -DNDEBUG
release: clean
release: $(BIN)

all:
	$(BINDIR)/main