section .data
    hello db 'Hello, World', 0xA  ; The string to print, followed by a newline character

section .text
    global _start

_start:
    ; Write the string to stdout
    mov rax, 1          ; syscall number for sys_write
    mov rdi, 1          ; file descriptor 1 is stdout
    mov rsi, hello      ; address of the string to output
    mov rdx, 14         ; number of bytes to write (13 characters + 1 newline)
    syscall             ; invoke the system call

    ; Exit the program
    mov rax, 60         ; syscall number for sys_exit
    xor rdi, rdi        ; exit code 0
    syscall             ; invoke the system call
