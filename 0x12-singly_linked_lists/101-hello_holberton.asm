section		.text
	extern	printf
        global	main
main:
	mv		edi, msg
	mv		eax, 0
	call	printf

section		.data
	msg	db 'Hello, Holberton', 0xa, 0
