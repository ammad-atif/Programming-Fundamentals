//#include<iostream>
//#include<string.h>
//using namespace std;
//int c1(char a[][10], int i, int j, char b[],int len)
//{
//	int count = 0, l = 0;
//		for (int k = 0; k < len; k++)
//		{
//			if (a[i][j] == b[l])
//			{
//				count++;
//			}
//			j++, l++;
//		}
//		if (count == len)
//		{
//			return 1;
//		}
//		return 0;
//}
//int c2(char a[][10], int i, int j, char b[], int len)
//{
//	int count = 0, l = 0;
//	for (int k = 0; k < len; k++)
//	{
//		if (a[i][j] == b[l])
//		{
//			count++;
//		}
//		j--, l++;
//	}
//	if (count == len)
//	{
//		return 1;
//	}
//	return 0;
//}
//int c3(char a[][10], int i, int j, char b[], int len)
//{
//	int count = 0, l = 0;
//	for (int k = 0; k < len; k++)
//	{
//		if (a[i][j] == b[l])
//		{
//			count++;
//		}
//		i++, l++;
//	}
//	if (count == len)
//	{
//		return 1;
//	}
//	return 0;
//}
//int c4(char a[][10], int i, int j, char b[], int len)
//{
//	int count = 0, l = 0;
//	for (int k = 0; k < len; k++)
//	{
//		if (a[i][j] == b[l])
//		{
//			count++;
//		}
//		i--, l++;
//	}
//	if (count == len)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char a[9][10] = { {"asjllxape"},{"jhbxeenpp"},{"hotthbswy"},{"roainuyzh"},{"ptfxrdzkq"},{"tpnlqoyjy"},{"anhapfgbg"},{"hxashwabs"},{"abcdefmce"} };
//	char b[10];
//	cout << "Enter the word to be searched:" << endl;
//	cin >> b;
//	int len = strlen(b);
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (b[0]==a[i][j])
//			{
//				if (c1(a, i, j, b, len)==1)
//				{
//					cout << "Exists in " << i << j << " in right direction";
//				}
//				if (c2(a, i, j, b, len) == 1)
//				{
//					cout << "Exists in " << i << j << " in left direction";
//				}
//				if (c3(a, i, j, b, len) == 1)
//				{
//					cout << "Exists in " << i << j << " in down direction";
//				}
//				if (c4(a, i, j, b, len) == 1)
//				{
//					cout << "Exists in " << i << j << " in up direction";
//				}
//
//
//			}
//		}
//	}
//
//}
//
