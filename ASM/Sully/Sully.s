global _main
extern _fopen
extern _fprintf
extern _fclose
extern _system
section .text
_main:
push rbx
mov rcx, count
cmp rcx, 1
jl return
lea rdi, [rel file]
lea rsi, [rel mode]
call _fopen
push rax
mov rdi, rax
lea rsi, [rel code]
mov rcx, count
dec rcx
mov r8, 10
mov r9, 34
mov rbx, rcx
push rsi
call _fprintf
pop r15
pop rdi
call _fclose
lea rdi, [rel cmd]
call _system
return:
pop rbx
ret
section .data
code: db "global _main%3$cextern _fopen%3$cextern _fprintf%3$cextern _fclose%3$cextern _system%3$csection .text%3$c_main:%3$cpush rbx%3$cmov rcx, count%3$ccmp rcx, 1%3$cjl return%3$clea rdi, [rel file]%3$clea rsi, [rel mode]%3$ccall _fopen%3$cpush rax%3$cmov rdi, rax%3$clea rsi, [rel code]%3$cmov rcx, count%3$cdec rcx%3$cmov r8, 10%3$cmov r9, 34%3$cmov rbx, rcx%3$cpush rsi%3$ccall _fprintf%3$cpop r15%3$cpop rdi%3$ccall _fclose%3$clea rdi, [rel cmd]%3$ccall _system%3$creturn:%3$cpop rbx%3$cret%3$csection .data%3$ccode: db %4$c%5$s%4$c,0%3$ccount equ %2$d%3$cname: db %4$cSully_%4$c, count+47,0%3$cfile: db %4$cSully_%4$c, count+47, %4$c.s%4$c,0%3$cmode: db %4$cw%4$c%3$ccmd: db %4$cnasm -f macho64 Sully_%4$c, count+47, %4$c.s && gcc -o Sully_%4$c, count+47, %4$c Sully_%4$c, count+47, %4$c.o && ./Sully_%4$c, count+47, 0",0
count equ -1
name: db "Sully_", count+47,0
file: db "Sully_", count+47, ".s",0
mode: db "w"
cmd: db "nasm -f macho64 Sully_", count+47, ".s && gcc -o Sully_", count+47, " Sully_", count+47, ".o && ./Sully_", count+47, 0