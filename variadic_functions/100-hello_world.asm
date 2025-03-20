section .data
    message db "Hello, World", 10  ; The string with a newline character
    message_len equ $ - message    ; Calculate the length of the string

section .text
    global _start  ; Entry point for the linker

_start:
    ; syscall: write(int fd, const void *buf, size_t count)
    mov rax, 1        ; syscall number for sys_write (1)
    mov rdi, 1        ; file descriptor 1 (stdout)
    mov rsi, message  ; pointer to the message
    mov rdx, message_len  ; message length
    syscall          ; invoke the system call

    ; syscall: exit(int status)
    mov rax, 60       ; syscall number for sys_exit (60)
    xor rdi, rdi      ; status 0
    syscall          ; invoke the system call
