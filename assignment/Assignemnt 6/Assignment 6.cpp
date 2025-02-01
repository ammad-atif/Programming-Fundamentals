#include<iostream>
using namespace std;
void isFibo(int arr[], int size) {
	int flag = 1;
	if ((arr[0] == 1 && arr[1] == 1 && size > 2) || (arr[0] == 0 && arr[1] == 1 && size > 2))
	{
		for (int i = 0; i < size - 2 && flag == 1; i++)
		{
			if (arr[i] + arr[i + 1] != arr[i + 2])
			{
				flag = 0;
			}
		}
		if (flag == 1)
		{
			cout << "It contains a fibonacci sequence" << endl;
		}
		else
		{
			cout << "It does not contain a fibonacci sequence"<<endl;
		}
	}
	else
	{
		cout << "It does not contain a fibonacci sequence"<<endl;
	}
}
int main()
{
	int list[10];
	cout << "Enter elements of array:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ")";
		cin >> list[i];
	}
	isFibo(list, 10);
	system("pause");
	return 0;
}