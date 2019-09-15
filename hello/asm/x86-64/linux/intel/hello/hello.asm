section .data
    SYS_EXIT        equ     60
    SYS_WRITE       equ     1
    STDOUT          equ     1
    EXIT_SUCCESS    equ     0
    
    MSG             db      "Hello, world!", 0xa
    MSGLEN          equ     $ - MSG

section .text
   global _start
_start:
    mov rax, SYS_WRITE
    mov rdi, STDOUT
    mov rsi, MSG
    mov rdx, MSGLEN
    syscall

    mov rax, SYS_EXIT
    mov rdi, EXIT_SUCCESS
    syscall
