#include<iostream>

using namespace std;

template<class name_type, class age_type = int>	//����Ĭ������
class Person
{
public:
	name_type name;
	age_type age;

	Person(name_type name, age_type age)	
	{
		this->name = name;
		this->age = age;
	}

	void show_info()
	{
		cout << "Name:" << this->name << ",Age:" << this->age << endl;
	}
};

void test01()
{
	//Person p1("����", 20);	������ģ���޷��Զ��Ƶ���������
	Person<string> p1("����", 19);	//ָ����Ĭ��age_type����ʡ��
	p1.show_info();
}

int main()
{
	test01();
	return 0;
}