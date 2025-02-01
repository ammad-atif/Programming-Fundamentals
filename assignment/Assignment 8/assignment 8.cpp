#include <iostream>
#include<windows.h>
#include<stdio.h>
#include <string.h>
using namespace std;
int prime(int x)
{
	int p = 1;
	for (int i = 2; i < x&&p==1; i++)
	{
		if (x%i==0)
		{
			p = 0;
		}
	}
	return p;
}
int	searchbefore(char arr[], int i)
{
	int found = 0;
	if (arr[i] == ' ')
	{
		found = 1;
	}
	else
	{
		for (int j = 0; j < i && found == 0; j++)
		{
			if (arr[i] == arr[j] || (arr[i] + 32) == arr[j] || (arr[i] - 32) == arr[j])
			{
				found = 1;
			}
		}
	}
	return found;
}
int countfrom(char arr[], int i)
{
	int count = 0;
	for (int j = i; arr[j] != 0; j++)
	{
		if (arr[i] == arr[j] || (arr[i] + 32) == arr[j] || (arr[i] - 32) == arr[j])
		{
			count++;
		}
	}
	return count;
}

void Takeinput(char arr[])
{
	char a[1000];
	cout << "Enter a sentence of no more than 1000 words:" << endl;
	gets_s(a);
	int i = 0;
	while (a[i] != '\0')
	{
		arr[i] = a[i];
		i++;
	}
	arr[i] = '\0';
}
int UniqueCounter(char arr[], char arr2[])
{
	int found;
	int count;
	int j = 0;
	int c = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		found = searchbefore(arr, i);
		if (found == 0)
		{
			count = countfrom(arr, i);
			if (count > 1)
			{
				c++;
				arr2[j] = arr[i];
				j++;
			}

		}
	}
	arr2[j] = '\0';
	 cout<< arr2 << endl;
	return c;
}
void CharDictionary(char arr[])
{
	int found;
	int count;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		found = searchbefore(arr, i);
		if (found == 0)
		{
			count = countfrom(arr, i);
			if (count > 1)
			{
				cout << arr[i] << "(" << count << ")" << endl;
			}
		}
	}
}
int RainbowNumber(char arr[], int i)
{
	int count = 0;
	for (int j = 0; arr[j] != '\0'; j++)
	{
		if (arr[i] == arr[j] || (arr[i] + 32) == arr[j] || (arr[i] - 32) == arr[j])
		{
			count++;
		}
	}
	if (count == 1)
	{
		return 0;
	}
	else if (count == 2 || count == 3)
	{
		return 1;
	}
	else if (count == 4 || count == 5)
	{
		return 2;
	}
	else if (count == 6 || count == 7)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}
void ShowMeTheRainbow(char arr[],char roll[])
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; arr[i]!='\0'; i++)
	{
		int n = RainbowNumber(arr, i);
		if (n==0)
		{
			SetConsoleTextAttribute(color,4 );
			cout << arr[i];
		}
		else if (n == 1)
		{
			SetConsoleTextAttribute(color,2);
			cout << arr[i];
		}
		else if (n == 2)
		{
			SetConsoleTextAttribute(color,1 );
			cout << arr[i];
		}
		else if (n == 3)
		{
			SetConsoleTextAttribute(color,5);
			cout << arr[i];
		}
		else if (n == 4)
		{
			SetConsoleTextAttribute(color,6);
			cout << arr[i];
		}
		SetConsoleTextAttribute(color,7);
	}
	cout << endl;
	int x = atoi(roll);
	if (x%2==0)
	{
		SetConsoleTextAttribute(color,11);
		for (int i = 0; arr[i]!='\0'; i++)
		{
			int y = prime(i);
			if (y!=1)
			{
				cout << i << "  ";
			}
		}
	}
	else
	{
		SetConsoleTextAttribute(color,13);
		for (int i = 0; arr[i] != '\0'; i++)
		{
			int y = prime(i);
			if (y == 1)
			{
				cout << i << "  ";
			}
		}
	}
	SetConsoleTextAttribute(color, 7);
}
int main()
{
	char arr[1000];
	char arr2[1000];
	char roll[5] = "6653";
	Takeinput(arr);
	UniqueCounter(arr,arr2);
	CharDictionary(arr);
	ShowMeTheRainbow(arr,roll);
}