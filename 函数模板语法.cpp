#include <iostream>

using namespace std;

//函数模板
template<typename T>    //声明模板，T是一个通用数据类型
void mySwap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    mySwap<int>(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
