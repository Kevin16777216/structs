all: structs.c
	gcc -o struct structs.c

run: 
	./struct

clean:
	$(RM) structs
