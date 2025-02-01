//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	char p[100] = "najam sheraz, the singer, is an intelligent boy.";
//	int x;
//	ofstream a("input.txt");
//	a << p;
//	a.close();
//	cout << "for encryption press 1\nFor decryption press 2\n";
//	cin >> x;
//	char q[100];
//	if (x==1)
//	{
//		ifstream b;
//		b.open("input.txt");
//		b.getline(q, 100);
//		b.close();
//		for (int i = 0; q[i]!='\0' ; i++)
//		{
//			q[i] = q[i] + 1;
//		}
//		cout << q;
//		ofstream z("encrypt.txt");
//		z << q;
//		z.close();
//	}
//	char w[100];
//	if (x == 2)
//	{
//		ifstream f("encrypt.txt");
//		f.getline(w, 100);
//		f.close();
//		for (int i = 0; w[i]!='\0' ; i++)
//		{
//			w[i] = w[i] - 1;
//		}
//		cout << endl << w;
//		ofstream g("decrypt.txt");
//			g << w;
//			g.close();
//	}
//}