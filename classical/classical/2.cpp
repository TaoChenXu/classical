#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m;
	int count[1000] = { 0 };
	string biaozhun="LNEDGFCBHIXJOAKRMSTVQWZPYU";

	cout << "���ģ�";
	getline(cin,m);
	for (int i = 0; i < m.length(); i++)
	{
		if (m[i] != '\0')
		{
			count[m[i] - 65]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << char(i+65)<<"��Ӧ����"<<biaozhun[i] <<"����"<<count[i] << "��"<<endl;
	}
	for (int i = 0; i < m.length(); i++)
	{
		if (m[i] != 32)
		{
			m[i] = biaozhun[m[i]-65];
		}
		cout << m[i];
	}
	system("pause");
	
}

