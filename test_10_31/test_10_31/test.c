#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int Compare(const void*x, const void*y)
{
	int*a = (int*)x;
	int*b = (int*)y;
	if (*a > *b)
	{
		return 1;
	}
	else if (*a < *b)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
void Swap(void*x, void*y, int size)
{
	char*_x = (char*)x;
	char*_y = (char*)y;
	char tmp;
	for (int i = 0; i < size; i++)
	{
		tmp = *_x;
		*_x =* _y;
		*_y = tmp;

		_x++;
		_y++;
	}

}
void Qsort(void*base, int num, int size, int(*Compare)(const void*x, const void*y))
{
	assert(base);
	assert(Compare);
	char*p = base;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if (Compare(p + j*size, p + (j + 1)*size)>0)
			{
				Swap(p + j*size, p + (j + 1)*size,size);
			}
		}
	}
}
void Print(int a[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int arr[5] = { 1,2,3,4,5};
	Qsort(arr, 5, 4, &Compare);
	Print(arr);


	/*int b[4] = { 0 };
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a[0]));
	int(*p)[4] = a;
	printf("%d\n", sizeof(a[0]+1));
	printf("%d\n", sizeof(*(a[0]+1)));
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(*(a+1)));

	printf("%d\n", sizeof(&a[0]+1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));*/

	/*int a[3] = { 1, 3, 5 };
	int*p = a[0];
	printf("%p\n", a[0]);
	printf("%p\n", a[0] + 1);*/


	//char *p = "abcdef";
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p+1));
	////printf("%d\n", strlen(*p));
	////printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p+1));
	//printf("%d\n", strlen(*p[0]+1));


	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr+0));
	////printf("%d\n", strlen(*arr));
	////printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr+1));
	//printf("%d\n", strlen(&arr[0]+1));


	
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//char(*p)[] = &arr;
	//printf("%d\n", sizeof(&arr));
	////printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(&arr+1));

	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr+0));
	////printf("%d\n", strlen(*arr));
	////printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr+1));
	//printf("%d\n", strlen(&arr[0]+1));
	system("pause");
	return 0;
}