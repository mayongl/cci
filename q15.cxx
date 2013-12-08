#include <iostream>
#include <cstring>

using namespace std;

char* replace1(char *c);
char* replace1(char *c);


int main()
{
}

char* replace1(char *c)
{
	if(c == NULL) return NULL;
	int len = strlen(c);
	if(len == 0) return NULL;
	int cnt = 0;
	for(int i=0; i<len; ++i)
	{
		if(c[i] == ' ') ++cnt;
	}

	char *cc = new char[len + 2*cnt + 1];

	int p = 0;

	for(int i = 0; i<len; ++i)
	{
		if(c[i] == ' ') {
			cc[p++] = '%';
			cc[p++] = '2';
			cc[p++] = '0';

		} else {
			cc[p++] = c[i];
		}
	}
	cc[p] = '\0';
	return cc;
}