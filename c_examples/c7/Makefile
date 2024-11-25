CC = gcc
CFLAGS = -Wall -g

ADDITIONAL_C = example_lib.c
ADDITIONAL_H = example_lib.h

#all steps
all : example

# step 1 
example: example.c $(ADDITIONAL_H)
	$(CC) $(CFLAGS) example.c $(ADDITIONAL_C) -o example.out


clean:
	rm example.out