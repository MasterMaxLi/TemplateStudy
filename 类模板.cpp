#include<iostream>

using namespace std;

//类模板
template<class NameType, class AgeType>
class Person
{
public:
	NameType m_Name;
	AgeType m_Age;

	Person(NameType name, AgeType age) :m_Name(name), m_Age(age) {}

	void showInfo()
	{
		cout << "Name:" << this->m_Name << ", Age:" << this->m_Age << endl;
	}

};

void test01()
{
	Person<string, int> p1("张三", 18);
	p1.showInfo();
}

int main()
{
	test01();
	return 0;
}