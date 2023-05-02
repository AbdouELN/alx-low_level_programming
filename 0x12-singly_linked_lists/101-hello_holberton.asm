section .data
    hello db "Hello, Holberton", 10  ; 10 is ASCII code for newline character
    format db "%s", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    sub rsp, 8  ; allocate space for 2 quadwords on the stack

    lea rdi, [rip+hello]  ; load address of the hello string
    mov rsi, format      ; load address of the format string
    xor rax, rax         ; clear rax (return value register) before calling printf
    call printf          ; call printf function

    add rsp, 8   ; restore stack pointer
    mov eax, 0   ; return 0 from main function

    mov rsp, rbp
    pop rbp
    ret
