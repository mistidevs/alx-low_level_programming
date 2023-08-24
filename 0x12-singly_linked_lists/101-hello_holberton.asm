section .data
    format db "Hello, Holberton", 10, 0

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format  ; Set the format string argument for printf
    call printf      ; Call the printf function
    pop rbp
    ret
