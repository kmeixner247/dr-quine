#include <stdio.h>
/*
    I tried to make this work without printf
*/
void do_it(){
char*s="#include <stdio.h>%c%c*%c    I tried to make this work without printf%c*%c%cvoid do_it(){%cchar*s=%c%s%c;%cprintf(s,10,47,10,10,47,10,10,34,s,34,10,10,10,47,10,10,47,10);}%cint main(){%c%c*%c    and almost had it, but it was just too long%c*%c%cdo_it();return 0;}";
printf(s,10,47,10,10,47,10,10,34,s,34,10,10,10,47,10,10,47,10);}
int main(){
/*
    and almost had it, but it was just too long
*/
do_it();return 0;}