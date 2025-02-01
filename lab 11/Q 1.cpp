//#include<iostream>
//#include<string.h>
//#include<conio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<fstream>
//using namespace std;
//int main()
//{
//	char x[100] = "1 2 3 4 5 6 7 8 9 10 ";
//	ofstream a;
//	a.open("Numbers.txt");
//	a << x;
//	a.close();
//	int y = 0, c1 = 0, c2 = 0;
//	ifstream b;
//	b.open("Numbers.txt");
//	b >> y;
//	while (!b.eof())
//	{
//		if (y%2==0)
//		{
//			ofstream c;
//			c.open("Even.txt", ios::app);
//			c << y;
//			c1++;
//			a.close();
//		}
//		else
//		{
//			ofstream d;
//			d.open("Odd.txt",ios::app);
//			d << y;
//			c2++;
//			d.close();
//		}
//		b >> y;
//	}
//	b.close();
//	cout << c1;
//	cout << c2;
//}