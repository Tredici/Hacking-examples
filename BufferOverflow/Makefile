CC = gcc
CFLAGS = -fno-stack-protector -fno-PIE -fno-pic -no-pie -ffreestanding -Wall -fno-sanitize=all
CPPFLAGS = -fno-stack-protector -fno-PIE -fno-pic -no-pie -ffreestanding -Wall -fno-sanitize=all
PYTHON = python3
EXE:=

main:
EXE+=main

main2:
EXE+=main2

mainf:
EXE+=mainf

mainpp:
EXE+=mainpp

rop:
EXE+=rop

rop.S: rop
	objdump -d  $^ > $@


.PHONY: attack
attack: main
	$(PYTHON) attack.py | ./main

main.S: main
	objdump -d  $^ > $@

.PHONY: attack
attack: main
	$(PYTHON) attack.py | ./main

.PHONY: attackrop
attackrop: attackrop rop
	$(PYTHON) attackrop.py | ./rop

mainpp.S: mainpp
	objdump -d  $^ > $@

.PHONY: attackpp
attackpp: mainpp
	$(PYTHON) attackpp.py | ./mainpp


clean:
	rm -f *.o *.S $(EXE)
