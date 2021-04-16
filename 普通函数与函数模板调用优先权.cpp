#include<iostream>

using namespace std;

//1.如果普通函数和函数模板都可以调用，优先调用普通函数	
void myPrint(int a, int b)
{
	cout << "调用普通函数\n";
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用函数模板\n";
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "调用重载函数模板\n";
}

void test01()
{
	//通过空模板的参数列表，强制调用函数模板
	//myPrint<>(1, 2);
	char a = 'a';
	char b = 'b';
	//有更好匹配情况下会优先调用函数模板
	myPrint(a, b);
}

int main()
{
	test01();
	return 0;
}