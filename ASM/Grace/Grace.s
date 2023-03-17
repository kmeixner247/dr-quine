%define CODE "%2$cdefine CODE %5$c%1$s%5$c%3$c%2$cdefine FILE %5$cGrace_kid.s%5$c%3$c%2$cmacro MAIN_HERE 0%3$c%4$c does this macro count as a define?%3$cglobal _main%3$cextern _fopen%3$cextern _fprintf%3$cextern _fclose%3$csection .text%3$c_main:%3$cpush rbx%3$clea rdi, [rel file]%3$clea rsi, [rel mode]%3$ccall _fopen%3$cpush rax%3$cmov rdi, rax%3$clea rsi, [rel code]%3$clea rdx, [rel code]%3$cmov rcx, 37%3$cmov r8, 10%3$cmov r9, 59%3$cmov rbx, 34%3$cpush rbx%3$ccall _fprintf%3$cpop rbx%3$cpop rdi%3$ccall _fclose%3$cpop rbx%3$cret%3$csection .data%3$ccode:%3$cdb CODE, 0%3$cfile:%3$cdb FILE, 0%3$cmode:%3$cdb %5$cw%5$c, 0%3$c%2$cendmacro%3$cMAIN_HERE"
%define FILE "Grace_kid.s"
%macro MAIN_HERE 0
; does this macro count as a define?
global _main
extern _fopen
extern _fprintf
extern _fclose
section .text
_main:
push rbx
lea rdi, [rel file]
lea rsi, [rel mode]
call _fopen
push rax
mov rdi, rax
lea rsi, [rel code]
lea rdx, [rel code]
mov rcx, 37
mov r8, 10
mov r9, 59
mov rbx, 34
push rbx
call _fprintf
pop rbx
pop rdi
call _fclose
pop rbx
ret
section .data
code:
db CODE, 0
file:
db FILE, 0
mode:
db "w", 0
%endmacro
MAIN_HERE