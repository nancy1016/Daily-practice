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




//�����ַ���
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
//	Reverse(str, str+len-1);//���巭ת
//	Reverse(str, str+len-1-k);//�ٷ�תǰ�벿��
//	Reverse(str+len-k,str+len-1);//��ת��벿��	
//}


//�ҵ�
char*Strstr(const char*str, const char*sub)
{
	assert(str);
	assert(sub);
	const char*str_p = str;//sub_pָ�����Դ�ַ������бȽ�
	const char*start = str;//startָ�뱣��ƥ��ɹ���λ��
	const char*sub_p = sub;//sub_p�����Ӵ����бȽ�
	while (*start != '\0')
	{
		str_p = start;
		sub_p = sub;//ÿ��ƥ�䲻�ɹ�ʱ��Ҫ���Ӵ�����ʼ�����±Ƚ�
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
		start++;//��ǰλ�ÿ�ʼƥ�䲻�ɹ�ʱ������һ��λ�ÿ�ʼ����ƥ��
	}
	return NULL;
}


//char*Strstr(const char*str, const char*sub)
//{
//		assert(str);
//		assert(sub);
//		const char*str_p = str;//str_p���������
//		const char*start = str_p;//start����ָ����ʼλ��
//		const char*sub_p = sub;
//		while (*start)//���ѭ��ֻ�Ǿ����˴�ʲôʱ��ʼ
//		{
//			str_p = start;
//			sub_p = sub;
//			//�ڲ�ѭ�����������Ƚ�
//			while (*str_p&&*sub_p&&*str_p == *sub_p)
//			{
//				str_p++;
//				sub_p++;
//			}
//			//ֻҪ�����ַ�����Ⱦ�ͣ������������һ���Ѿ�����\0��ͣ����
//			//*sub_p=='\0'˵���Ƚϳɹ��ˣ���ʱ�򷵻���ʼ�Ƚ�λ�ã�����ʼ�Ƚ�λ����start���б�����
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