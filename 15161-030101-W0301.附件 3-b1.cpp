/* 1552239 ��2 ����� */
#include <iostream>
#include <cstdio>
#include <iomanip>   //��ʽ��������������ͷ�ļ�
using namespace std;

int main()
{
	double a=123.456789012345;
	int    b=123456;
	int    i;

	for (i=0; i<2; i++, a=-a) {
		cout << "======================" << endl;
		cout << "=" << (a>=0 ? "��":"��") << "�������ĸ�ʽ�����=" << endl;
		cout << "======================" << endl;

		cout << "C++ȱʡ���" << endl;
		cout << a << endl;
		printf("xxxx\n");
		getchar();

		cout << "9λ��Ч����" << endl;
		cout << setprecision(9) << a << endl;
		printf("xxxx\n");
		getchar();

		cout << "С�����6λ" << endl;
		cout << setiosflags(ios::fixed) << setprecision(6) << a << endl;
		printf("xxxx\n");
		getchar();

		cout << "С�����8λ" << endl;
		cout << setiosflags(ios::fixed) << setprecision(8) << a << endl;
		printf("xxxx\n");
		getchar();

		cout << "�ܿ��20��С�����6λ���Ҷ���" << endl;
		cout << setw(20) << setiosflags(ios::fixed) << setprecision(6) << a << endl;
		printf("xxxx\n");
		getchar();

		cout << "�ܿ��20��С�����8λ�������" << endl;
		cout << setw(20) << setiosflags(ios::fixed) << setprecision(8) << setiosflags(ios::left) << a << '*' << endl; //�����,����*��Ϊ�˿���������ո�
		printf("xxxx\n");
		getchar();

		cout << resetiosflags(ios::fixed) << resetiosflags(ios::left) << setprecision(6); //�˾���������ios::fixed��ios::left�����ò��ָ�6λС��

		cout << "��ѧ������-С�����6λ" << endl;
		cout << setiosflags(ios::scientific) << a << endl;
		printf("xxxx\n");
		getchar();

		cout << "��ѧ������-С�����4λ" << endl;
		cout << setiosflags(ios::scientific) << setprecision(4) << a << endl;
		printf("xxxx\n");
		getchar();

		cout << "��ѧ������-�ܿ��20��С�����6λ���Ҷ���" << endl;
		cout << setw(20) << setiosflags(ios::scientific) << setprecision(6) << a << endl;
		printf("xxxx\n");
		getchar();

		cout << "��ѧ������-�ܿ��20��С�����4λ�������" << endl;
		cout << setw(20) << setiosflags(ios::scientific) << setprecision(4) << setiosflags(ios::left) << a << '*' << endl; //�����,����*��Ϊ�˿���������ո�
		printf("xxxx\n");
		getchar();

		cout << resetiosflags(ios::scientific) << resetiosflags(ios::left) << setprecision(6); //�˾���������ios::fixed��ios::left�����ò��ָ�6λС��

		cout << endl << endl;
		}

	for (i=0; i<2; i++, b=-b) {
		cout << "======================" << endl;
		cout << "=" << (b>=0 ? "��":"��") << "�����ĸ�ʽ�����=" << endl;
		cout << "======================" << endl;

		cout << "ȱʡ���" << endl;
		cout << b << endl;
		printf("xxxx\n");
		getchar();
    
		cout << "ȱʡ���-�ܿ��20���Ҷ���" << endl;
		cout << setw(20) << b << endl;
		printf("xxxx\n");
		getchar();

		cout << "ȱʡ���-�ܿ��20�������" << endl;
		cout << setw(20) << setiosflags(ios::left) << b << '*' << endl; //�����,����*��Ϊ�˿���������ո�
		printf("xxxx\n");
		getchar();

		cout << resetiosflags(ios::left); //��������������

		cout << "�˽������" << endl;
		cout << oct << b << endl;
		printf("xxxx\n");
		getchar();
    
		cout << "�˽���-�ܿ��20���Ҷ���" << endl;
		cout << setw(20) << b << endl;
		printf("xxxx\n");
		getchar();

		cout << "�˽���-�ܿ��20�������" << endl;
		cout << setw(20) << setiosflags(ios::left) << b << '*' << endl; //�����,����*��Ϊ�˿���������ո�
		printf("xxxx\n");
		getchar();

		cout << resetiosflags(ios::left); //��������������

		cout << "ʮ���������(a-f)" << endl;
		cout << hex << b << endl;
		printf("xxxx\n");
		getchar();
    
		cout << "ʮ������(a-f)-�ܿ��20���Ҷ���" << endl;
		cout << setw(20) << b << endl;
		printf("xxxx\n");
		getchar();

		cout << "ʮ���������(A-F)" << endl;
		cout << setiosflags(ios::uppercase) << b << endl;
		printf("xxxx\n");
		getchar();
    
		cout << "ʮ������-�ܿ��20�������" << endl;
		cout << setw(20) << setiosflags(ios::left) << b << '*' << endl; //�����,����*��Ϊ�˿���������ո�
		printf("xxxx\n");
		getchar();

		cout << resetiosflags(ios::uppercase) << resetiosflags(ios::left); //������д��������Ӱ��

		cout << dec;     //�ָ�10����
		cout << "ȱʡ-������λ" << endl;
		cout << setiosflags(ios::showpos) << b << endl;
		printf("xxxx\n");
		getchar();

		cout << endl << endl;
		}

    return 0;
}
