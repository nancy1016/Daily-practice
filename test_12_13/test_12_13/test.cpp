#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//class Student
//{
//public:
//	void SetStudentInfo(char*name, char*gender, int age)
//	{
//	  cout << this << endl;
//	  strcpy(this->_name, name);
//	  strcpy(this->_gender, gender);
//	  this->_age = age;
//	}
//
//	void Print()
//	{
//		cout << this->_name << " " << this->_gender << " " << this->_age << endl;
//		this = NULL;//把this指针置空
//	}
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};



//struct Student
//{
//	
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//
//void SetStudentInfo( Student*pthis,char*name, char*gender, int age)
//{
//	strcpy(pthis->_name, name);
//	strcpy(pthis->_gender, gender);
//	pthis->_age = age;
//}
//void print( Student*pthis)
//{
//	//cout << _name << " " << _gender << " " << _age << endl;
//	printf("%s %s %d\n", pthis->_name, pthis->_gender, pthis->_age);
//}


//class A
//{
//public:
//	void Print()
//	{
//		cout << _a << endl;
//	}
//	void fun()
//	{
//		cout << "fun()" << endl;
//	}
//private:
//	int _a;
//};


//class A
//{
//public:
//	void set(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//	void print()
//	{
//		cout << "_a=" << _a << " " << "_b = " << _b << endl;
//	}
//	
//private:
//	int _a;
//	int _b;
//};


//类中既有成员变量，又有成员函数
//class A1
//{
//public:
//	void f1(){}
//private:
//	int _a;
//};
////类中仅有成员函数
//class A2
//{
//public:
//	void f1(){}
//};
////空类
//class A3
//{
//
//};


//int main()
//{
	//int a = 6;
	//int b = 5;
	////int &ra;//编译出错
	//int &ra = a;
	//int &rra = a;//一个变量可以有多个引用

	//ra = b;//这是赋值，不是引用
	////&ra = b;//编译出错，一个变量只能对一个实体引用



	/*cout << "A1:" << sizeof(A1) << endl;
	cout << "A2:" << sizeof(A2) << endl;
	cout << "A3:" << sizeof(A3) << endl;*/
	
	//A aa;//在栈上创建对象
	//cout << "类大小：" << sizeof(A) << endl;

	//aa.set(2, 3);
	//aa.print();

	/*A*pbb = new A;
	pbb->set(2, 3);
	pbb->print();*/
	


	//A* a=NULL;
	//a->Print();
	//a->fun();


	// Student s1, s2;//定义了s1与s2两个变量

	//SetStudentInfo(&s1, "zhangsan", "nan", 18);//传入s1变量地址，打印相关信息
	//print(&s1);

	//SetStudentInfo(&s2, "lisi", "nv", 19);//传入s2变量地址，打印相关信息
	//print(&s2);



	//Student s1,s2;//分别定义s1,s2两个对象
	//s1.SetStudentInfo("zhangsan", "nan", 18);
	//s1.Print();

	//cout << "this:" << this << endl;


	/*s2.SetStudentInfo("lisi", "nv", 19);
	s2.Print();*/

	
	//system("pause");
	//return 0;
//}


int main()
{

	const int 
	system("pause");
	return 0;
}













//#include"Student.h"
//
//
//
//void Student::SetStudentInfo(char*name, char*gender, int age)
//{
//   strcpy(_name, name);
//   strcpy(_gender, gender);
//   _age = age;
//}
//
//
//
//int main()
//{
//	Student s1;
//	s1.SetStudentInfo("zhangsan", "nan", 18);
//	s1.Print();
//	//s1._age = 12;
//	//cout << s1._age << endl;
//	system("pause");
//	return 0;
//}