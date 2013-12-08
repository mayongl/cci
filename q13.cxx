#include <cstring>
#include <iostream>

using namespace std;

void removeDuplicate(char s[]);
void removeDuplicate2(char s[]);

int main()
{
    char s1[] = "123423456243656abcde";
	removeDuplicate2(s1);
	cout << s1 << endl;
}

void removeDuplicate(char s[])
{
	int len = strlen(s);
	if(len < 2) return;
	int p = 0;
	for(int i=0; i<len; ++i)
	{
		if(s[i] != '\0')
		{
			s[p++] = s[i];
			for(int j=i+1; j < len; ++j)
			{				
				if(s[j]==s[i])
				s[j] = '\0';
			}
		}	
 	}
}

void removeDuplicate2(char s[])
{
	int len = strlen(s);
	if(len < 2) return;
	int check = 0, p = 0;
	for(int i=0; i < len; ++i)
	{
		int v = (int)(s[i]-'a');
		if((check & (1 << v)) == 0)
		{
			s[p++] = s[i];
			check |= (1 << v);
		}
	}
	s[p] = '\0';
}


