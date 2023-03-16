#include <stdio.h>
/*
    I tried to make this work without printf
*/
void do_it(){
/*
    and almost had it, but it was just too long
*/
char*s="#include <stdio.h>%c%c*%c    I tried to make this work without printf%c*%c%cvoid do_it(){%c%c*%c    and almost had it, but it was just too long%c*%c%cchar*s=%c%s%c;%cprintf(s,10,47,10,10,47,10,10,47,10,10,47,10,34,s,34,10,10);}%cint main(){do_it();return 0;}";
printf(s,10,47,10,10,47,10,10,47,10,10,47,10,34,s,34,10,10);}
int main(){do_it();return 0;}