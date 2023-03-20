#include <stdio.h>
#include <fstream>
using namespace std;
int i = 5;
string s[]={
"#include <stdio.h>",
"#include <fstream>",
"using namespace std;",
"int i = 5;",
"string s[]={",
"};",
"char q=34;",
"void print_from_until(ofstream &of, string s[], int f, int u, bool m) {",
"    for (int j=f;j<=u;j++) {",
"        if (m) of << q;",
"        if (j==3) of << s[j].substr(0,s[j].length()-2) << to_string(i-1) << ';';",
"        else of << s[j];",
"        if (m) of << q << ',';",
"        of << endl;",
"    }",
"    /*",
"        I really just wanted to change things up a bit",
"    */",
"}",
"int main() {",
"    if (i < 1) return 0;",
"    char file[] = {'S','u','l','l','y','_',(char)i+47,'.','c','p','p',0};",
"    ofstream of(file);",
"    print_from_until(of,s,0,4,false);",
"    print_from_until(of,s,0,33,true);",
"    print_from_until(of,s,5,33,false);",
"    char cmd[] = {'c','+','+',' ','-','o',' ','S','u','l','l','y','_',(char)i+47,' ','S','u','l','l','y','_',(char)i+47,'.','c','p','p',' ','&','&',' ','.','/','S','u','l','l','y','_',(char)i+47,0};",
"    char mode[] = {'w',0};",
"    popen(cmd, mode);",
"}",
"/*",
"    but that much work just to avoid double quotes?",
"*/",
};
char q=34;
void print_from_until(ofstream &of, string s[], int f, int u, bool m) {
    for (int j=f;j<=u;j++) {
        if (m) of << q;
        if (j==3) of << s[j].substr(0,s[j].length()-2) << to_string(i-1) << ';';
        else of << s[j];
        if (m) of << q << ',';
        of << endl;
    }
    /*
        I really just wanted to change things up a bit
    */
}
int main() {
    if (i < 1) return 0;
    char file[] = {'S','u','l','l','y','_',(char)i+47,'.','c','p','p',0};
    ofstream of(file);
    print_from_until(of,s,0,4,false);
    print_from_until(of,s,0,32,true);
    print_from_until(of,s,5,32,false);
    char cmd[] = {'c','+','+',' ','-','o',' ','S','u','l','l','y','_',(char)i+47,' ','S','u','l','l','y','_',(char)i+47,'.','c','p','p',' ','&','&',' ','.','/','S','u','l','l','y','_',(char)i+47,0};
    char mode[] = {'w',0};
    popen(cmd, mode);
}
/*
    but that much work just to avoid double quotes?
*/
