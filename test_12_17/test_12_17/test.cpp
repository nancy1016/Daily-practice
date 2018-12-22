#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
//class Date
//{
//public:
//	Date(int year=1900)
//	{
//		//_year = 1900;
//		_month = 1;
//		_day = 1;
//	}
//
//	/*Date(int year=1900, int month=1, int day=1)
//	{
//		cout << "Date()" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	/*Date( Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}*/
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};




//class String
//{
//public:
//	String(const char*str = "nancy")
//	{
//		cout << "String()" << endl;
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	String(String&dd)
//	{
//		cout << "kaobei" << endl;
//		_str = (char*)malloc(strlen(dd._str) + 1);
//		strcpy(_str, dd._str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char*_str;
//};



//class Person
//{
//private:
//	String _name;
//	int _age;
//};



//class Time
//{
//public:
//
//	/*Time()
//	{
//		cout << "time()" << endl;
//	}*/
//
//	/*Time(int hour=1 , int minute = 1, int second = 1)
//	{
//		cout << "time()" << endl;
//		_hour = hour;
//		_minute = minute;
//		_second = second;
//	}*/
//
//
//	Time(int hour = 0, int minute = 0, int second = 0)
//		:_hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//
//	/*~Time()
//	{
//		cout << "~Time()" << endl;
//	}*/
//private:
//	int _hour;
//	int _minute;
//	int _second;
//
//};


//class Date
//{
//public:
//
//	Date(int year = 1900, int month = 1, int day = 1)
//		:_year(year)
//		//, _month(month)
//		, _day(day)
//		, _month(_day)
//		
//		
//	{
//		//_c = 20;
//	}
//
//	//Date(const Date&d)
//	//	:_year(d._year)
//	//	, _month(d._month)
//	//	, _day(d._day)
//	//	, r(_year)
//	//{
//	//	//_c = 20;
//	//}
//
//
//
//	/*Date(int year=1900,int month=1, int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		r = year;
//	}*/
//
//	//Date(const Date& d)
//	//{
//	//	cout << "kaobei" << endl;
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//
//
//	//Date& operator=(const Date& d)
//	//{
//	//	if (this != &d)
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//		//d._day = 7;
//	//	}
//	//	
//	//	return *this;
//	//}
//	//void Print()
//	//{
//	//	cout << _year << " " << _month << " " << _day << endl;
//	//}
//
//
//
//	/*Date& Add(int days)
//	{
//		_day += days;
//		return *this;
//	}*/
//
//	//Date operator+(int days)
//	//{
//	//	Date tmp(*this);
//	//	tmp._day += days;
//	//	return tmp;
//
//	//	/*this->_day += days;
//	//	return *this;*/
//
//	//}
//
//	const Date*operator&()const
//	{
//		return this;
//	}
//
//	void printf()
//	{
//		cout << "printf()" << endl;
//		cout << _year << "-" << _month << "-" << _day << endl;
//		//display();
//	}
//	void display()const
//	{
//		cout << "display()const" << endl;
//		cout << _year << " " << _month << " " << _day << endl;
//		//printf();
//	}
//
//private:
//	int _year;
//	//int _month;
//	int _day;
//	int _month;
//	//const int _c;
//	//int &r;
//	//Time _t;
//};


//Date operator+(const Date&d, int days)
//{
//	Date tmp(d); 
//	tmp._day -= days;
//	return tmp;
//
//}


//bool operator=(Date d1, Date d1)
//{
//	return d1._year == d2._year&&d1._month == d2._month&&d1._day == d2._day;
//}



//统计一个程序中创建了多少个类对象
//方法一：全局变量
//int _count = 0;
//class A
//{
//public:
//	 A()
//	{
//		_count ++;
//	}
//
//	 A(A&a)
//	 {
//		 _count++;
//	 }
//
//	~A()
//	{
//		_count--;
//	}
//
//
//	   void GetCount()
//	   {
//		   cout << _count << endl;
//	   }
//
//private:
//	//int _count;
//};



//方法二：静态成员变量
class A
{
public:
	A()
		//:_count(0)
	{
		_count++;
	}

	A(const A&d)
	{
		_count++;
	}

	~A()
	{
		_count--;
	}
	static void get()const
	{
		cout << _count << endl;
		//print();
	}
	
	void print()
	{
		cout << "print()" << endl;
		//get();
	}
private:
	static int _count;
};

int A::_count = 0;
void test()
{
	A a1;
	A a2(a1);
}
int main()
{
	A a;
	A a3;
	A a4(a3);
	test();
	a.print();
	//a.get();
	//A::get();
	
	cout << sizeof(a) << endl;

	//A a1;
	//A a2(a1);
	//A a2;
	//A a3;
	//GetCount();
	 //Date d1(2018,12,5);
	//d1.printf();
	//d1.display();

	/*Date d1(2018,12,19);
	Date d2;
	Date d3;
	d3=d2;
	d1.Print();
	d2.Print();*/

	//d.operator+(5);
	//d + 5;

	//d.Add(2);
	//Date c2(c1);
	//cout << c1 == c2 << endl;


	//String s1;
	//String s2(s1);

	
	//Date d;//Date::


	//Date d2(d1);
	//Person p;v
	//Date d1;
	//Date d2(1, 2, 3);
	system("pause");
	return 0;
}