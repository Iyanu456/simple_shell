CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
TARGET = shell
SRC = main.c shell.c utils.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

