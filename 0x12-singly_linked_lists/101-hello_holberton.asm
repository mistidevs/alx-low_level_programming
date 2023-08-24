section .data
    format db "Hello, Holberton", 0
    newline db 10, 0  ; Newline character and null terminator

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format  ; Set the format string argument for printf
    call printf      ; Call the printf function
    mov rdi, newline ; Set the newline character argument for printf
    call printf      ; Call the printf function again for the newline
    pop rbp
    ret
