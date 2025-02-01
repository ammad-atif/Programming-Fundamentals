//#include<iostream>
//using namespace std;
//#include<iostream>
//using namespace std;
//#include<string.h>
//int main()
//{
//	char a[1000], b[100];
//		int h, count=0, counto=0;
//	cout << "Enter pargraph:";
//	cout << endl;
//	gets_s(a);
//	cout << "Enter word to be searched:";
//	cout << endl;
//	gets_s(b);
//	int len = 0;
//	for ( int i = 0; b[i]!='\0'; i++)
//	{
//		len++;
//	}
//	for (int i = 0; a[i]!='\0'; i++)
//	{
//		if (a[i] == b[0])
//		{
//			 h = 0, count = 0;
//			for (int j = i; j <i+len; j++)
//			{
//				if (a[j]==b[h])
//				{
//					h++;
//					count++;
//				}
//			}
//			if (count == len)
//			{
//				a[i] = 'x'; 
//				int j = i + len, k = i + 1;
//				while(a[j]!='\0')
//				{
//					a[k] = a[j];
//					j++, k++;
//				}
//				a[k] = '\0';
//				counto++;
//			}
//		}
//		
//	}
//	cout << "Word exist in asedntence : " << counto<<" times";
//	cout << "The new sentence is :";
//	cout << endl << a;
//}