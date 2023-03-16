#include <stdio.h>
/*
    macros in macros..
*/
#define STR char*s="#include <stdio.h>%c%c*%c    macros in macros..%c*%c%c#define STR char*s=%c%s%c;%c#define CODE FILE*f=fopen(%cGrace_kid.c%c,%cw%c);fprintf(f,s,10,47,10,10,47,10,34,s,34,10,34,34,34,34,10,10);fclose(f);%c#define MAIN() int main(){STR CODE}%cMAIN()";
#define CODE FILE*f=fopen("Grace_kid.c","w");fprintf(f,s,10,47,10,10,47,10,34,s,34,10,34,34,34,34,10,10);fclose(f);
#define MAIN() int main(){STR CODE}
MAIN()