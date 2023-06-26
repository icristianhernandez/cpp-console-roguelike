CC = g++
CFLAGS = -Wall -Wextra -std=c++11

TARGET = roguelike

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
  $(CC) $(CFLAGS) $(OBJ) -o $@ $(ncurses)

.cpp.o:
  $(CC) $(CFLAGS) -c $< -o $@

clean:
  rm -f $(OBJ) $(TARGET)
