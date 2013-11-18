#include <iostream>
#include <cstring>
using namespace std;

void swap(char &a, char &b);
void reverse1(char *s);
void reverse2(char *s);

int main()
{
    char s[] = "123456abcde";
    reverse1(s);
    cout << s << endl;
    reverse2(s);
    cout << s << endl;
    cout << "This is from git!" << endl;
}

void swap(char &a, char &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}

void reverse1(char *s)
{
    if(!s) return;
    char *p = s, *q = s;
    while(*q) ++q;
    --q;
    while(p < q)
        swap(*p++, *q--);
}

void reverse2(char *s)
{
    int len = strlen(s);
    for(int i=0; i<len/2; ++i)
        swap(s[i], s[len-i-1]);
}
