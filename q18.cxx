#include <iostream>
#include <cstring>

using namespace std;

bool isSubString(string str1, string str2);
bool isRoatate(string str1, string str2);

int main()
{
	string str1 = "apple";
	string str2 = "pplea";
	cout << isRoatate(str1, str2) << endl;
}

bool isSubString(string str1, string str2)
{
	if(str1.find(str2) != string::npos) return true;
	return false;
}

bool isRoatate(string str1, string str2)
{
	if(str1.length() != str2.length() || str1.length() <= 0)
		return false;
	return isSubString(str1 + str1, str2);
}