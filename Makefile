all:
	$(CC) -v
	$(CC) -c src/main.c && $(CC) -o exec main.o && ./exec

.PHONY: all
