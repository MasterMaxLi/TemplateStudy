#include<iostream>

using namespace std;

//交换模板
template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//模板函数排序
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

//打印模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char arr[] = "abcdefg";
	int len = sizeof(arr) / sizeof(char);
	mySort(arr, len);
	printArray<char>(arr, len);
	int arrN[] = { 1,2,5,4,10,7,6,9 };
	int num = sizeof(arrN) / sizeof(int);
	mySort(arrN, num);
	printArray<int>(arrN, len);
}

int main()
{
	test01();
	return 0;
}