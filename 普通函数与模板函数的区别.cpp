#include<iostream>

using namespace std;

int mySum(int a, int b)
{
	return a + b;
}

template<class T>
T mySum01(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'a';
	cout << mySum(a, c);
}

void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	
	//cout << mySum01(a, c);	错误，不会隐式转换
	//cout << mySum01<int>(a, c);	可以隐式转换
}

int main()
{
	//test01();
	test02();
	return 0;
}