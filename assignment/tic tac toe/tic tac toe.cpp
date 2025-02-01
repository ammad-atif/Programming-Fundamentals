//#include<iostream>
//using namespace std;
//void printboard(int b[][3], int r)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (b[i][j] == 0)
//			{
//				cout << "_ ";
//			}
//			else if (b[i][j] == 1)
//			{
//				cout << "X ";
//			}
//			else
//			{
//				cout << "O ";
//			}
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//void updateboard(int b[][3], int r, int c, int p)
//{
//	b[r][c] = p;
//}
//bool checkwinner(int b[][3], int& who, int p)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (b[i][0] == b[i][1] && b[i][0] == b[i][2] && b[i][0] != 0)
//		{
//			who = p;
//			return true;
//		}
//		else if(b[0][i]==b[1][i]&&b[0][i]==b[2][i]&&b[0][i]!=0)
//		{
//			who = p;
//			return true;
//		}
//		else if (b[0][0]==b[1][1]&&b[0][0]==b[2][2]&&b[0][0]!=0)
//		{
//			who = p;
//			return true;
//		}
//		else if (b[0][2] == b[1][1] && b[0][2] == b[2][0] && b[0][2] != 0)
//		{
//			who = p;
//			return true;
//		}
//	}
//	return false;
//}
//void calculate(int b[][3], int& r, int& c,int p)
//{
//	int w = 0, who = 0, opp = 2,  temp;
//	int flag = 1;
//	for (int i = 0; i < 3 && flag == 1; i++)
//	{
//		for (int j = 0; j < 3 && flag == 1; j++)
//		{
//			if (b[i][j] == 0)
//			{
//				temp=b[i][j];
//				b[i][j] = p;
//				w = checkwinner(b, who, p);
//				if (w == 1)
//				{
//					flag = 0;
//				}
//				else
//				{
//					b[i][j] = temp;
//				}
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		return;
//	}
//	for (int i = 0; i < 3&&flag==1; i++)
//	{
//		for (int j = 0; j < 3&&flag==1; j++)
//		{
//			if (b[i][j]==0)
//			{
//				temp = b[i][j];
//				b[i][j] = opp;
//				w=checkwinner(b, who,opp);
//				if (w==1)
//				{
//					b[i][j] = p;
//					flag = 0;
//				}
//				else
//				{
//					b[i][j] = temp;
//				}
//			}
//		}
//	}
//	if (flag==0)
//	{
//		return;
//	}
//	for (int i = 0; i < 3 && flag == 1; i++)
//	{
//		for (int j = 0; j < 3 && flag == 1; j++)
//		{
//			if (b[i][j] == 0)
//			{
//				b[i][j] = p;
//				flag = 0;
//			}
//		}
//	}
//	if (flag==0)
//	{
//		return;
//	}
//}
//
//int main()
//{
//	int board[3][3] = { 0 }, r, c, p = 1, who = 0, win = false;
//	printboard(board, 3);
//	for (int i = 0; i <= 9 && win == false; i++)
//	{
//		if (p == 1)
//
//		{
//			calculate(board, r, c,p);
//			printboard(board, 3);
//			win = checkwinner(board, who, p);
//			p = 2;
//
//		}
//
//		else
//		{
//			cin >> r >> c;
//			while (board[r][c] != 0 || r >2 || c > 2)
//			{
//				cout << "\nPlease enter again\n";
//				cin >> r >> c;
//			}
//			updateboard(board, r, c, 2);
//			printboard(board, 3);
//			win = checkwinner(board, who, p);
//			p = 1;
//		}
//		if (win==true)
//		{
//			cout << endl << "Winner is: " << who;
//		}
//
//
//	}
//
//}