#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print_arr2(int (*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//int Strcmp(const char*str1, const char*str2)
//{
//	assert(str1);
//	assert(str2);
//	int ret=0;
//	//ע���������������ֻ��*str1==*str2,��Ϊ�������ָ�붼�ߵ��ˡ�\0������������ѭ��������ָ���ֽ������ƶ������º���������
//	//����ʱ��ʵ�����ַ����ȽϽ���Ѿ�����,����ȵġ�����һ����ҪҪ�������������һ��ָ���Ѿ�����\0"
//	while (*str1 == *str2&&*str1!='\0')
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		ret = 1;
//	}
//	else if (*str1 < *str2)
//	{
//		ret = -1;
//	}
//	return ret;
//}



//void*Memcpy(void*dest, const void*src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	assert(count > 0);
//	char*pdest = (char*)dest;
//	const char*psrc = (const char*)src;
//	while (count)
//	{
//		*pdest = *psrc;
//		*psrc++;
//		*pdest++;
//		count--;
//	}
//	return dest;
//}

void Reverse(char*left, char*right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void Reverse_K(char*str, int k)
{
	int len = strlen(str);
	Reverse(str, str+len-1);
	Reverse(str, str+len-1-k);
	Reverse(str+len-k,str+len-1);	
}
int main()
{
	char str1[] = "ABCD";
	Reverse_K(str1, 2);
	printf("%s", str1);
	/*int arr1[10] = { 0 };
	int arr2[5] = { 1, 2, 3, 4, 5 };
	Memcpy(arr1, arr2, sizeof(arr2));
	for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}*/


	/*int arr[1] = { 0 };
	int p[] = { 1, 2, 3 };*/
	//char dst[20]="abcdefgh" ;
	//char*src = "abcdedg";
	//memcpy(dst+3,dst+1 , 4);
	//printf("%s", dst);

	/*char*str1 = "adc";
	char*str2 = "ad";
	int ret = Strcmp(str1, str2);
	printf("%d", ret);*/

	//int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//print_arr1(arr, 3, 5);
	//print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}