global _start

section .data

messege: db "Hello assembly!",10

section .text
_start:
    mov rax, 1
    mov rdi, 1
    mov rsi,messege
    mov rdx,19
    syscall

    mov rax,60
    syscall



; nasm -f elf64 hello.asm -o hello.o
; ld -o hello hello.o
