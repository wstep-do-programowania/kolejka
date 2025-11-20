main: main.c queue.h
	gcc main.c -O2 -o main -fsanitize=address

test: main
	bash test.sh