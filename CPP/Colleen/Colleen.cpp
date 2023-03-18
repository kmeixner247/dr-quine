#include <iostream>
using namespace std;
string s[]={
"#include <iostream>",
"using namespace std;",
"string s[]={",
"};",
"char q=34;",
"void print_from_until(string s[], int f, int u, bool m) {",
"    for (int i=f;i<=u;i++) {",
"        if (m) cout << q;",
"        cout << s[i];",
"        if (m) cout << q << ',';",
"        cout << endl;",
"    }",
"}",
"int main() {",
"    /*",
"        remember the C quine with write I mentioned?",
"    */",
"    print_from_until(s,0,2,false);",
"    print_from_until(s,0,23,true);",
"    print_from_until(s,3,23,false);",
"}",
"/*",
"    this is roughly how it would have worked",
"*/",
};
char q=34;
void print_from_until(string s[], int f, int u, bool m) {
    for (int i=f;i<=u;i++) {
        if (m) cout << q;
        cout << s[i];
        if (m) cout << q << ',';
        cout << endl;
    }
}
int main() {
    /*
        remember the C quine with write I mentioned?
    */
    print_from_until(s,0,2,false);
    print_from_until(s,0,23,true);
    print_from_until(s,3,23,false);
}
/*
    this is roughly how it would have worked
*/
