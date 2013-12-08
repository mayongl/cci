#include <iostream>
#include <cstring>

using namespace std;

void zero1(int **a, int m, int n);

int main()
{
	



}

void zero1(int **a, int m, int n)
{
	bool row[m], col[n];
	memset(row, false, sizeof(row));
	memset(col, false, sizeof(col));
	for(int i=0; j<m; ++j)
		for(int j=0; j<n; ++j)
			if(a[i][j] == 0){
				row[i] = true;
				col[j] = true;
			}

	for(int i=0; j<m; ++j)
		for(int j=0; j<n; ++j)
			if(row[i] || col[j])
				a[i][j] == 0;
}
