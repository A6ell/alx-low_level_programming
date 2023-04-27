section .data
    message db "Hello, Holberton", 10 ; the message to print

section .text
    global _start
_start:
    ; call the printf function to print the message
    push message
    call printf
    add rsp, 8

    ; call the exit function to terminate the program
    xor edi, edi ; return code 0
    mov eax, 60 ; exit syscall number
    syscall