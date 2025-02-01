#include<iostream>
using namespace std;
int main()
{
	int list1[10], list2[10], sum1=0, sum2=0;
	cout << "Enter numbers for first array:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter " << i+1 << " mumber:";
		cin >> list1[i];
	}
	cout << "Enter numbers for second array:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter " << i+1 << " mumber:";
		cin >> list2[i];
	}
	for (int i = 0; i < 10; i++)
	{
		sum1 = sum1 + list1[i];
	}
	for (int i = 0; i < 10; i++)
	{
		
		sum2 = sum2 + list2[i];
	}
	if (sum1>sum2)
	{
		cout << "\nSum of 1st array is greater and = " << sum1;
	}
	else if (sum2>sum1)
	{
		cout << "\nSum of 2nd array is greater and = " << sum2;
	}
	else
	{
		cout << "\nSame";
	}
}