all:
	gcc -o stat main.c
run: all
	./stat