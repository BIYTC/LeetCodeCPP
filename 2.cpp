#include<iostream>
using namespace std;

int main() {
	/*int** ary = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		ary[i] = new int[4];
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			ary[i][j] = i * j;
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << ary[i][j] << " ";
		}
		cout << endl;
	}*/
	int *a = new int [3];
	for (size_t i = 0; i < 3; i++)
	{
		a[i] = i;
	}
	//for (size_t i = 0; i < 3; i++)
	//{
	//	cout << *a << endl;
	//}
	cout << *a;
	system("pause");
}
