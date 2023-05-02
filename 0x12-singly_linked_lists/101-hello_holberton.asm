section        .texte
        extern printf
        global main
main:
        mv            edi, message
        mv            eax, 0
        call   printf

section        .data
        message db 'Hello, Holberton', 0xa, 0
