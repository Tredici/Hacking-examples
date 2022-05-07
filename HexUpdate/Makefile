CC = g++
CPPFLAGS = -Wextra -Wall

EXE=

main+=main
main: main.o

hexmain: main

hexdump: main
	xxd main > hexmain.txt

rehex: hexmain.txt
	xxd -r hexmain.txt hackedmain

disassemble: main
	objdump -d main > main.S


.PHONY: clean
clean:
	rm -f $(EXE) *.o *.d *.S



