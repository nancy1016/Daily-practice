#include<stdio.h>
#include<stdlib.h>
int main()
{


	int a[4] = { 1, 2, 3, 4 };
	int*ptr1 = (int*)(&a + 1);
	int*ptr2 = (int*)((int)a + 1);
	printf("%x %x", ptr1[-1], *ptr2);
	/*int(*p)[9];
	int a[10];
	p = &a;*/

	/*int m=3;
	int b[5] = { 0 };*/


	/*int a = 6;
	int arr[10] = { 0 };
	printf("arr的地址：%p\n", arr);
	printf("&arr的地址：%p\n", &arr);

	printf("arr+1的地址：%p\n", arr+1);
	printf("&arr+1的地址：%p\n", &arr+1);*/


	/*char str1[] = "hello";
	char str2[] = "hello";
	char*p1 = "hello";
	char*p2 = "hello";
	if (str1 == str2)
	{
		printf("aaaaa\n");
	}
	else
	{
		printf("bbbbb\n");
	}

	if (p1 == p2)
	{
		printf("ccccc\n");
	}
	else
	{
		printf("ddddd\n");
	}
*/


	/*char str1[] = "hello";
	char str2[] = "hello";

	char*p1 = "hello";
	char*p2 = "hello";

	printf("str1=%p\n", str1);
	printf("str2=%p\n", str2);
	printf("p1=%p\n", p1);
	printf("p2=%p\n", p2);

	printf("st1大小：%d\n", sizeof(str1));
	printf("p1大小：%d\n", sizeof(p1));*/

	




	//char*pstr = "hello world";
	//char str[] = "hello world";
	//*(str + 1) = 'w';
	////char*p = "hello";
	//printf("pstr=%p\n", pstr);
	//printf("str=%p\n", str);
	//printf("%c\n", *(str + 1));
	////printf("%s\n", pstr);


	//char ch = 'w';
	//int*pc = &ch;//定义一个int类型的指针变量来保存ch的地址
	//char*pp = &ch;//定义一个char类型的指针变量来保存ch的地址
	//*pc = 'm';
	//printf("%c\n", *pc);
	////输出pc和pi的地址
	//printf("pc=%p,pp=%p\n", pc,pp);
	system("pause");
	return 0;
}
