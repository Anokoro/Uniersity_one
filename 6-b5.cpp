
/*1552239 ���� �����*/
#include<iostream>
using namespace std;

int main()
{
	char str[64];    
	int n = 0, w = 1,number = 0;   
	cout << "�����������ֵ�����32λ��" << endl;     // ����
	cin >> str;

	// ��ȡ���ȣ�ȥ���Ƿ���
	char* p = str;
	while (*p >= '0' && *p++ <= '1') 
		n++; 							 
	while (n--)        // ת��2���Ƶ�10����
	{
		number += (*(str+n) - '0')*w;
		w *= 2;
	}
	// ���
	cout << "��Ӧ��ʮ����ֵ��" << endl;
	cout << number << endl;
	return number;
}