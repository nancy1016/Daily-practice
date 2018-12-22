#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
//int Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}


int Add(int d1, int d2)
{
	int ret = d1 + d2;
	return ret;
}
int main()
{


	//int a = 5;
	//printf("%p\n", &a);
	int a = 3;
	int b = 4;
	int  ret = Add(a, b);
	cout << ret << endl;
	Add(5, 6);
	cout << ret << endl;


	/*int ret = Add(1, 2);
	Add(3, 4);
	cout << "Add(1,2)=" << ret << endl;*/


	//const int a = 5;
	////int&ra = a;//编译不通过，因为a是const类型，普通的引用意图修改变量a的值，不被允许
	//const int&ra = a;//引用类型需要与变量类型一致
	////int &b = 10;//编译出错，b为常量
	//const int&b = 10;

	//double c = 12.34;
	////int&rc = c;//编译出错，类型不同
	//const int &rc = c;//编译通过，说明了其实在引用时，12.34进行隐式类型转换，其实是把一个临时变量交给ra
	//cout << rc << endl;





	system("pause");
	return 0;
}