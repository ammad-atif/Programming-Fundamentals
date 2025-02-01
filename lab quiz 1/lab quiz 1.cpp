//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	int num, tnum,i=1,totalc=0,totalp=0,j=1;
//	cout << "\nEnter the number of family members with you=";
//	cin >> num;
//	tnum = num + 1;
//	cout << "\nTotal members including you=" << tnum;
//	cout << "\n*****Welcome to emporium cinemia*****";
//	cout << "\nSelect from the following menu for ticket of each member including you";
//	while (i<=tnum)
//	{
//		cout << "\nPress S for student ticket price 250";
//		cout << "\nPress N for normal ticket price 400";
//		cout << "\nPress E for exclusive ticket price 750\n";
//		cin >> ch;
//		if (ch=='s'||ch=='S')
//		{
//			totalc = totalc + 250;
//			i = i + 1;
//		}
//		else if (ch=='n'||ch=='N')
//		{
//			totalc = totalc + 400;
//			i = i + 1;
//		}
//		else if (ch=='e'||ch=='E')
//		{
//			totalc = totalc + 750;
//			i = i + 1;
//		}
//		else
//		{
//			cout << "\nIt is an invalid input\n";
//		}
//	}
//	cout << "\n*****Welcome to popcorn shop*****";
//	cout << "\nSelect from the menu of popcorns for members including you ";
//	while (j <= tnum)
//	{
//		cout << "\nPress S for simple price 100";
//		cout << "\nPress T for tacos price 150 ";
//		cout << "\nPress C for caramel price 200\n";
//		cin >> ch;
//		if (ch=='s'||ch=='S')
//		{
//			totalp = totalp + 100;
//			j = j + 1;
//		}
//		else if (ch=='t'||ch=='T')
//		{
//			totalp = totalp + 150;
//			j = j + 1;
//		}
//		else if (ch=='c'||ch=='C')
//		{
//			totalp = totalp + 200;
//			j = j + 1;
//		}
//		else
//		{
//			cout << "\nIt is an invalid input";
//		}
//	}
//	cout << "\nAmount used for film=" << totalc;
//	cout << "\nAmount used for popcorn=" << totalp;
//	cout << "\nTotal expense=" << totalc + totalp;
//}