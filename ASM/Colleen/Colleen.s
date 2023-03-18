; this is kinda just the same as in C
global _main
extern _printf
section .text
_prints:
lea rdi, [rel code]
lea rsi, [rel code]
mov rdx, 10
mov rcx, 34
mov r8, 59
call _printf
ret
_main:
call _prints ; what is even considered within the function here
ret
section	.data
code:
db "%4$c this is kinda just the same as in C%2$cglobal _main%2$cextern _printf%2$csection .text%2$c_prints:%2$clea rdi, [rel code]%2$clea rsi, [rel code]%2$cmov rdx, 10%2$cmov rcx, 34%2$cmov r8, 59%2$ccall _printf%2$cret%2$c_main:%2$ccall _prints %4$c what is even considered within the function here%2$cret%2$csection	.data%2$ccode:%2$cdb %3$c%1$s%3$c,0",0