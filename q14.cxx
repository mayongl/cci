#include <iostream>
#include <cstring>

using namespace std;

bool isAnagram1(string s, string t);
bool isAnagram2(string s, string t);

int main()
{
	string s = "asdfasdf";
	string t = "sad44sdf";
	cout << isAnagram1(s, t) << endl;
}	


bool isAnagram1(string s, string t)
{
	if(s=="" || t=="") return false;
	if(s.length() != t.length()) return false;

	sort(&s[0], &s[0]+s.length());
	sort(&t[0], &t[0]+t.length());
	return (s == t);
}

bool isAnagram2(string s, string t)
{
	if(s == "" || t == "") return false;
	if(s.length() != t.length()) return false;

	int len = s.length();
	int c[256];
	memset(c, 0, sizeof(c));
	for(int i=0; i<len; ++i){
		++c[(int)s[i]];
		--c[(int)t[i]];
	}

	for(int i=0; i<256; ++i)
		if(c[i] != 0) return false;

	return true; 
}

