section .data
    hello db 'Hello, Holberton', 10  ; 10 is ASCII code for newline character
    hello_len equ $ - hello         ; length of hello string

section .text
    global _start

_start:
    ; write hello string to stdout
    mov eax, 4          ; system call for write
    mov ebx, 1          ; file descriptor for stdout
    mov ecx, hello      ; address of hello string
    mov edx, hello_len  ; length of hello string
    int 0x80            ; call kernel to perform system call

    ; exit program
    mov eax, 1          ; system call for exit
    xor ebx, ebx        ; exit status code
    int 0x80            ; call kernel to perform system call
