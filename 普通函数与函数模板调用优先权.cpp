#include<iostream>

using namespace std;

//1.�����ͨ�����ͺ���ģ�嶼���Ե��ã����ȵ�����ͨ����	
void myPrint(int a, int b)
{
	cout << "������ͨ����\n";
}

template<class T>
void myPrint(T a, T b)
{
	cout << "���ú���ģ��\n";
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "�������غ���ģ��\n";
}

void test01()
{
	//ͨ����ģ��Ĳ����б�ǿ�Ƶ��ú���ģ��
	//myPrint<>(1, 2);
	char a = 'a';
	char b = 'b';
	//�и���ƥ������»����ȵ��ú���ģ��
	myPrint(a, b);
}

int main()
{
	test01();
	return 0;
}