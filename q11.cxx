#include <iostream>
#include <cstring>
using namespace std;

bool isUnique1(string s);
bool isUnique2(string s);

int main()
{
    string s = "abcdde";
    cout << isUnique1(s) <<endl;
    cout << isUnique2(s) <<endl;
}

bool isUnique1(string s)
{
    bool a[256];
    memset(a, 0, sizeof(a));
    int len = s.length();
    for(int i=0; i<len; ++i)
    {
        int v = (int)s[i];
        if(a[v]) return false;
        a[v] = true;   
    }
    return true;
}


bool isUnique2(string s)
{
    int check = 0;
    int len = s.length();
    for(int i=0; i<len; ++i)
    {
        int v = (int)(s[i] - 'a');
        if(check & (1 << v)) return false;
        check |= (1 << v);
    }
    return true;
} 
