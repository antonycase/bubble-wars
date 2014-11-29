CC=g++
CFLAGS=-c -Wall

all: bubble

bubble: BubbleWarsStart.o Bubble.o
	$(CC) BubbleWarsStart.o Bubble.o -o bubble

BubbleWarsStart.o: BubbleWarsStart.cpp
	$(CC) $(CFLAGS) BubbleWarsStart.cpp

Bubble.o: Bubble.cpp
	$(CC) $(CFLAGS) Bubble.cpp

clean:
	rm -rf *o bubble