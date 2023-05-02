section		.text
	extern	printf
        global	main
main:
	mv		edi, msg
	mv		eax, 0
	call	printf

section		.data
	hello db "Hello, Holberton", 10  ; 10 is ASCII code for newline character
	format db "%s", 0
