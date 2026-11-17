CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic --std=c17 -g
TARGET = hello

all: $(TARGET)

$(TARGET): hello.c
	$(CC) $(CFLAGS) -o $(TARGET) hello.c


clean:
	/bin/rm -f $(TARGET)
