#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//char*Strcat(char*dest, const char*src)
//{
//	assert(dest);
//	assert(src);
//	char*start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//dest已经到了\0处
//	while (*src)
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	return dest;
//}



//int Judge_str(char*str, char*substr)
//{
//	assert(str);
//	assert(substr);
//	int ret;
//	int len_str = strlen(str);
//	int len_substr = strlen(substr);
//	char*tmp = malloc(sizeof(char)*(2*len_str + 1));
//	strcpy(tmp, str);
//	strncat(tmp,str, len_str);
//	char*p = strstr(tmp, substr);//注意这里不能用tmp接收，因为如果查找到，则返回的是字串第一次出现的位置，而如果用tmp接收，则free（tmp)地址就变了，不是free掉原来开辟内存空间的起始地址处
//	if (p&&len_substr == len_str)
//	{
//		ret = 1;
//	}
//	else
//	{
//		ret = 0;
//	}
//	free(tmp);
//	return ret;	
//	//free(tmp);
//}


//char* GetMemory(char*p)
//{
//	p = (char*)malloc(10);
//	//strcpy(p, "nnn");
//	return p;
//}



//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	//strcpy(p, "nnn");
//	return p;
//}



//char* test()
//{
//	int*p = (int*)malloc(10);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//	printf("before:%p\n", p);
//	return p;
//}

//char* GetMemory()
//{
//	char*p = (char*)malloc(20);
//	*p = 'a';
//	return p;
//}

//void GetMemory(char**p)
//{
//	*p = (char*)malloc(20);
//	strcpy(*p, "aa");
//	
//}


struct S
{
	int a;
	int b;
};
int main()
{
	/*struct S s;
	s.a = 2; 
	s.b = 3;

	printf("s:%p\n", &s);
	printf("s.a:%p\n", &s.a);
	printf("s.b:%p\n", &s.b);*/
	/*int a = 3;
	int b = 5;
	int c[2] = { 1, 2 };
	int d[2] = { 3, 4 };
	printf("a:%p\n", &a);
	printf("b:%p\n", &b);
	printf("c:%p\n", &c);
	printf("d:%p\n", &d);*/

	/*char*str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf("%s",str);*/

	/*char*q;
	q=test();
	printf("after:%p\n", q);*/
	/*int n = 0;
	scanf("%d", &n);

	int*p = malloc(n*sizeof(int));
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		system("pause");
		return 1;
	}
	printf("before:%p\n",p);
	for (int i = 0; i < n; i++)
	{
		*(p + i) = i;
	}
	free(p);
	*p = 3;
	printf("after:%p\n", p);*/

	//char*str = NULL;
	//str=GetMemory();
	//strcpy(str, "hello world");
	//printf(str);
	//printf("%s",str);



	/*char str1[]="AABCD";
	char str2[] = "BCDAA";
	int ret = Judge_str(str1, str2);
	printf("%d", ret);*/


	/*strcpy(str1, "abcd");
	strncat(str1, "def",5);
	printf("%s", str1);*/
	system("pause");
	return 0;
}