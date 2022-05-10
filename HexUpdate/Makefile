CC = g++
CPPFLAGS = -Wextra -Wall

EXE=

EXE+=main
main: main.o

hexmain: main

EXE+=hexmain.txt
hexdump: main
	xxd main > hexmain.txt

EXE+=hackedmain
rehex: hexmain.txt
	xxd -r hexmain.txt hackedmain
	chmod u+x hackedmain

disassemble: main
	objdump -d main > main.S


.PHONY: clean
clean:
	rm -f $(EXE) *.o *.d *.S



