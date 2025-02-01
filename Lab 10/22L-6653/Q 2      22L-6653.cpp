//#include<iostream>
//using namespace std;
//int main()
//{
//	float av = 0;
//	int m1=0, m2=0, m3=0;
//	int a[3][5];
//	for (int i = 0; i < 3; i++)
//	{
//		cout<<"For monkey: " << i + 1;
//		cout << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "Enter pounds of food for day: " << j+1;
//			cin >> a[i][j];
//			while (a[i][j]<0)
//			{
//				cout << "Enter vorrectly" << endl;
//				cout << "Enter pounds of food for day: " << j + 1;
//				cin >> a[i][j];
//			}
//		}
//	}
//	for (int i = 0; i <3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			av = av + a[i][j];
//			if (i==0)
//			{
//				m1 = m1 + a[i][j];
//			}
//			else if (i==1)
//			{
//				m2 = m2 + a[i][j];
//			}
//			else if (i==2)
//			{
//				m3 = m3 + a[i][j];
//			}
//		}
//	}
//	av = av / 5;
//	cout << "Average for food eaten by monkeys in day: " << endl;
//	cout << av;
//	cout << endl;
//	cout << "Maximum food is: " << endl;
//	if (m1>=m2&&m1>=m3)
//	{
//		cout << "By monkey: 1"<<endl;
//		cout << "Value is: "<<m1;
//	}
//	else if(m2>=m1&&m2>=m3)
//	{
//		cout << "By monkey: 2" << endl;
//		cout << "Value is: " << m2;
//	}
//	if(m3 >= m1 && m3 >= m2)
//	{
//		cout << "By monkey: 3" << endl;
//		cout << "Value is: " << m3;
//	}
//	cout << endl;
//	cout << "Minimum food is: " << endl;
//	if (m1 <= m2 && m1 <= m3)
//	{
//		cout << "By monkey: 1" << endl;
//		cout << "Value is: " << m1;
//	}
//	else if (m2 <= m1 && m2 <= m3)
//	{
//		cout << "By monkey: 2" << endl;
//		cout << "Value is: " << m2;
//	}
//	else if (m3 <= m1 && m3 <= m2)
//	{
//		cout << "By monkey: 3" << endl;
//		cout << "Value is: " << m3;
//	}
//}