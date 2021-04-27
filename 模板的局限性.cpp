#include<iostream>

using namespace std;

class Person
{
public:
	string name;
	int age;

	Person(string name, int age) :name(name), age(age){	}
};

template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.name == p2.name && p1.age == p2.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	if (myCompare(a, b))
	{
		cout << "a = b\n";
	}
	else
	{
		cout << "a != b\n";
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 20);

	bool result = myCompare(p1, p2);
	if (result)
	{
		cout << "p1 = p2\n";
	}
	else
	{
		cout << "p1 != p2\n";
	}
}

int main()
{
	//test01();
	test02();
	return 0;
}