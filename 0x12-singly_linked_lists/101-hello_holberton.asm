section        .texte
        extern printf
        global main
main:
        mv            edi, messag
        mv            eax, 0
        call   printf

section        .data
        messag db 'Hello, Holberton', 0xa, 0
