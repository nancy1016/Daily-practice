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
//	//注意这里的条件不能只是*str1==*str2,因为如果两个指针都走到了‘\0’，则还是满足循环条件，指针又进行了移动，导致后面结果出错
//	//而这时其实两个字符串比较结果已经出来,是相等的。所以一定还要要添加条件“其中一个指针已经到达\0"
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




//左旋字符串
//void Reverse(char*left, char*right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void Reverse_K(char*str, int k)
//{
//	int len = strlen(str);
//	Reverse(str, str+len-1);//整体翻转
//	Reverse(str, str+len-1-k);//再翻转前半部分
//	Reverse(str+len-k,str+len-1);//翻转后半部分	
//}


//我的
char*Strstr(const char*str, const char*sub)
{
	assert(str);
	assert(sub);
	const char*str_p = str;//sub_p指针遍历源字符串进行比较
	const char*start = str;//start指针保存匹配成功的位置
	const char*sub_p = sub;//sub_p遍历子串进行比较
	while (*start != '\0')
	{
		str_p = start;
		sub_p = sub;//每次匹配不成功时都要从子串的起始处重新比较
		while (*str_p != '\0'&&*sub_p != '\0')
		{
			if (*str_p == *sub_p)
			{
				str_p++;
				sub_p++;
			}
			else
			{
				break;
			}
		}
		if (*sub_p == '\0')
		{
			return start;
		}
		start++;//当前位置开始匹配不成功时，从下一个位置开始尝试匹配
	}
	return NULL;
}


//char*Strstr(const char*str, const char*sub)
//{
//		assert(str);
//		assert(sub);
//		const char*str_p = str;//str_p真正向后走
//		const char*start = str_p;//start用来指向起始位置
//		const char*sub_p = sub;
//		while (*start)//外层循环只是决定了从什么时候开始
//		{
//			str_p = start;
//			sub_p = sub;
//			//内层循环才是真正比较
//			while (*str_p&&*sub_p&&*str_p == *sub_p)
//			{
//				str_p++;
//				sub_p++;
//			}
//			//只要两个字符不相等就停下来，或者有一个已经到达\0就停下来
//			//*sub_p=='\0'说明比较成功了，这时候返回起始比较位置，而起始比较位置在start当中保存着
//			if (*sub_p == '\0')
//			{
//				return start;
//			}
//			start++;
//		}
//		return NULL;
//}
int main()
{

	char str[] = "abbcd";
	char *p;
	p = Strstr(str, "bc");
	printf("%s", p);


	/*char str1[] = "ABCD";
	int k = 0;
	scanf("%d", &k);
	Reverse_K(str1, k);
	printf("%s", str1);*/



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