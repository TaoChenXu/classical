//#include<iostream>
//using namespace std;
//int main()
//{
//	int choose;
//	cout << "����/���ܣ�0/1����";
//	cin >> choose;
//	char m[1000], c[1000];
//	int move;
//	int n;
//	if (choose == 0)
//	{
//		cout << "�ƶ�λ����";
//		cin >> move;
//		cout << "���ĳ��ȣ�";
//		cin >> n;
//		cout << "���ģ�";
//		for (int i = 0; i < n; i++)
//		{
//			cin >> c[i];
//		}
//		for (int i = 0; i < n; i++)
//		{
//			m[i] = (c[i] - 'a' + move) % 26 + 'a';
//			cout << m[i] << " ";
//
//		}
//		cout << endl;
//
//	}
//	if (choose == 1)
//	{
//		move = 0;
//		cout << "���ĳ��ȣ�";
//		cin >> n;
//		cout << "���ģ�";
//		for (int i = 0; i < n; i++)
//		{
//			cin >> m[i];
//		}
//
//		for (move = 0; move < 26; move++)
//		{
//
//			cout << "�ƶ�λ��:" << move << "	";
//			for (int i = 0; i < n; i++)
//			{
//				c[i] = (m[i] - 'a' + move) % 26 + 'a';
//				cout << c[i] << " ";
//
//			}
//			cout << endl;
//		}
//	}
//	system("pause");
//
//}


