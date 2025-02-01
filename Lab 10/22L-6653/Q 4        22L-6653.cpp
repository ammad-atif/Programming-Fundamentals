//#include<iostream>
//using namespace std;
//int check(int d[][6], int p[][3], int i, int j)
//{
//	if (d[i][j] == p[0][0])
//	{
//		return 1;
//	}
//	return 0;
//}
//bool Exist(int d[][6], int p[][3])
//{
//	int  c = 0, k, l, m, n, found = 0;
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (check(d, p, i, j) == 1)
//			{
//				c = 0;
//				for (m = 0, k = i; m < 3; m++, k++)
//				{
//					for (n = 0, l = j; n < 3; n++, l++)
//					{
//						if (d[k][l] == p[m][n])
//						{
//							c++;
//						}
//					}
//				}
//				if (c == 9)
//				{
//					found = 1;
//				}
//			}
//		}
//	}
//	if (found == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int d[6][6] = { {1,2,7,8,9,6},{2,2,3,4,5,6},{3,2,3,4,5,6},{4,2,3,4,5,6},{5 ,2 ,9 ,8 ,7 ,6},{6 ,2 ,7 ,4 ,5 ,6} };
//	int p[3][3] = { {3,4,5},{3,4,5},{3,4,5} };
//	cout << Exist(d, p);
//}