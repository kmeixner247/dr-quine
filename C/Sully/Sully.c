#include <stdlib.h>
#include <stdio.h>
char*s="#include <stdlib.h>%c#include <stdio.h>%cchar*s=%c%s%c;%cint main(){%cint i=%d; if (i < 1) return 0;%cchar fn[11];%csnprintf(fn,11,%cSully_%cd.c%c,i-1);%cFILE*f=fopen(fn,%cw%c);%cfprintf(f,s,10,10,34,s,34,10,10,i-1,10,10,34,37,34,10,34,34,10,10,10,10,34,37,37,37,34,10);%cfclose(f);%cchar cmd[500];%csnprintf(cmd,500,%cgcc -o Sully_%cd %cs && ./Sully_%cd%c,i-1,fn,i-1);%csystem(cmd);}";
int main(){
int i=5; if (i < 1) return 0;
char fn[11];
snprintf(fn,11,"Sully_%d.c",i-1);
FILE*f=fopen(fn,"w");
fprintf(f,s,10,10,34,s,34,10,10,i-1,10,10,34,37,34,10,34,34,10,10,10,10,34,37,37,37,34,10);
fclose(f);
char cmd[500];
snprintf(cmd,500,"gcc -o Sully_%d %s && ./Sully_%d",i-1,fn,i-1);
system(cmd);}