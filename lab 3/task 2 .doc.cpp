#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 2, j = 2, k = 1, l = 1;
	if (n>=1)
	{
		cout << k<<endl;
	}
	while (i<=n)
	{
		if (j-k==l)
		{
			cout << j << endl;
			i++;
			k=j;
			l++;
		}
		j++;
	}
	
} 