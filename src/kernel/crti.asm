init:
global _init
;.type _init, @function
_init:
	push ebp
	mov ebp, esp
	; gcc will nicely put the contents of crtbegin.o's .init section here. */

fini:
global _fini
;.type _fini, @function
_fini:
	push ebp
	mov ebp,esp
	; gcc will nicely put the contents of crtbegin.o's .fini section here. */