#include<iostream>

using namespace std;

template<class name_type, class age_type = int>	//可以默认类型
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
	//Person p1("张三", 20);	错误，类模板无法自动推导数据类型
	Person<string> p1("李四", 19);	//指定了默认age_type，可省略
	p1.show_info();
}

int main()
{
	test01();
	return 0;
}