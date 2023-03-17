#include <fstream>
/*
    let's be real, there is probably a much nicer way to do these macros
*/
#define CODE std::string s[]={"#include <fstream>","/*","    let's be real, there is probably a much nicer way to do these macros","*/","#define CODE std::string s[]={","};","#define PRINT void print_from_until(std::ofstream &of,std::string s[],int f, int u, bool m){char q=34;for (int i=f;i<=u;i++) {if (m) of<<q;of<<s[i];if (m) of<<q<<',';else if (i!=u) of<<std::endl;}}","#define FT() CODE PRINT int main() {std::ofstream of(","Grace_kid.cpp",");print_from_until(of,s,0,4,false);print_from_until(of,s,0,7,true);of<<(char)34<<s[8]<<(char)34<<',';print_from_until(of,s,9,10,true);print_from_until(of,s,5,7,false);of<<(char)34<<s[8]<<(char)34;print_from_until(of,s,9,10,false);}","FT()",};
#define PRINT void print_from_until(std::ofstream &of,std::string s[],int f, int u, bool m){char q=34;for (int i=f;i<=u;i++) {if (m) of<<q;of<<s[i];if (m) of<<q<<',';else if (i!=u) of<<std::endl;}}
#define FT() CODE PRINT int main() {std::ofstream of("Grace_kid.cpp");print_from_until(of,s,0,4,false);print_from_until(of,s,0,7,true);of<<(char)34<<s[8]<<(char)34<<',';print_from_until(of,s,9,10,true);print_from_until(of,s,5,7,false);of<<(char)34<<s[8]<<(char)34;print_from_until(of,s,9,10,false);}
FT()