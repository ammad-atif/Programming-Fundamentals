//#include<iostream>
//using namespace std;
//void revalph(char a[], int i, int j)
//{
//	if (i!=j)
//	{
//		int x = (j - i) + 1;
//		x = x / 2;
//		int k = 0;
//		for (int l = 1; l <= x; l++)
//		{
//			swap(a[i + k], a[j - k]);
//			k++;
//		}
//	}
//	
//}
//int main()
//{
//	char a[100];
//	gets_s(a);
//	int i = 0;
//	for (int l = 0; a[l]!='\0' ; l++)
//	{
//		if (a[l]==' ')
//		{
//
//			revalph(a, i, l - 1);
//				i = l + 1;
//		}
//		if (a[l+1]=='\0')
//		{
//			revalph(a, i, l);
//		}
//	}
//	cout << a;
//
//}