exec = exec
CLIB = -F /System/Library/PrivateFrameworks -framework login

all: mkdir
	$(CC) -v
	$(CC) -c src/main.c && $(CC) -o ./exec/exec main.o && ./exec/exec
screensaver: mkdir
	$(CC) src/screensaver.c -O2 -o ./exec/screensaver -framework ApplicationServices $(CLIB)
mkdir:
	@if [ ! -d $(exec) ] ; then mkdir $(exec) ; fi

.PHONY: all
