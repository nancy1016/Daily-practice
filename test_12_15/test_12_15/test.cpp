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
	////int&ra = a;//���벻ͨ������Ϊa��const���ͣ���ͨ��������ͼ�޸ı���a��ֵ����������
	//const int&ra = a;//����������Ҫ���������һ��
	////int &b = 10;//�������bΪ����
	//const int&b = 10;

	//double c = 12.34;
	////int&rc = c;//����������Ͳ�ͬ
	//const int &rc = c;//����ͨ����˵������ʵ������ʱ��12.34������ʽ����ת������ʵ�ǰ�һ����ʱ��������ra
	//cout << rc << endl;





	system("pause");
	return 0;
}