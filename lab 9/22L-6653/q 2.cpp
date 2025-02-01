#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cout << "Enter a sentence of no more than 100 words:" << endl;
	gets_s(a);
	int b[100], j = 0;
	int count = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			count++;
		}
		if (a[i] == ' ' || a[i + 1] == '\0')
		{
			b[j] = count;
			count = 0;
			j++;
		}
	}
	int min = b[0];
	for (int i = 0; i < j; i++)
	{
		if (min > b[i])
		{
			min = b[i];
		}
	}
	cout << "The word with minimum length is:" << endl << min;
}