#include <stdio.h>
//yo these quines are bending my mind
#define STR char*s="#include <stdio.h>%c%c%cyo these quines are bending my mind%c#define STR char*s=%c%s%c;%c#define PRINT printf(s,10,47,47,10,34,s,34,10,10,10);%c#define MAIN int main(){STR PRINT}%cMAIN";
#define PRINT printf(s,10,47,47,10,34,s,34,10,10,10);
#define MAIN int main(){STR PRINT}
MAIN