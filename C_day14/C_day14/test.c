#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void Left_Move_K(char arr[], int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	k %= len;//k有可能大于字符串的长度，但这也是合理的，相当于转了一圈，然后再移
//	for (int i = 0; i < k; i++)//k控制挪的轮数（注意不是次数）
//	{
//		//将第一个字符先保存起来，便于最后放到末尾
//		char tmp = arr[0];
//		//搬移数据：除了\0外其他依次向前挪
//		for (int j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//每挪完一轮，就要把之前保存的第一个元素放到最后
//		arr[len - 1] = tmp;
//	}
//}


//左旋字符串
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
	k %= len;//k有可能大于字符串的长度，但这也是合理的，相当于转了一圈，然后再移
	Reverse(str, str + len - 1);//整体翻转
	Reverse(str, str + len - 1 - k);//再翻转前半部分
	Reverse(str + len - k, str + len - 1);//翻转后半部分	
}


//int Judge_str(char*str, char*substr)
//{
//	assert(str);
//	assert(substr);
//	int ret;
//	int len_str = strlen(str);
//	int len_substr = strlen(substr);
//	char*tmp = malloc(sizeof(char)*(2 * len_str + 1));
//	if (tmp == NULL)
//	{
//		printf("申请空间失败 ！\n");
//		exit(1);
//	}
//	strcpy(tmp, str);
//	strncat(tmp, str, len_str);
//	char*p = strstr(tmp, substr);//注意这里不能用tmp接收，因为如果查找到，则返回的是字串第一次出现的位置，而如果用tmp接收，则free（tmp)地址就变了，不是free掉原来开辟内存空间的起始地址处
//	if (p&&len_substr == len_str)//这里一定要检测空间有没有开辟成功
//	{
//		ret = 1;
//	}
//	else
//	{
//		ret = 0;
//	}
//	free(tmp);
//	return ret;
//}


int IsLeftRotate(char*str1, char*str2)
{
	int ret;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	while (len1)
	{
		Reverse_K(str1, 1);
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
		len1--;
	}
	return 0;
}
int main()
{

	char str1[] = "ABCD";
	char*str2 = "BCDA";
	Reverse_K(str1, 3);
	int ret = IsLeftRotate(str1, str2);
	//printf("%s", str1);
	if (ret == 1)
	{
		printf("str2是str1旋转过后的串\n");
	}
	else
	{
		printf("str2不是str1旋转过后的串\n");
	}



	/*char str1[] = "AABCD";
	char str2[] = "BCDAU";
	int ret = Judge_str(str1, str2);
	if (ret == 1)
	{
		printf("str2是str1旋转过后的串\n");
	}
	else
	{
		printf("str2不是str1旋转过后的串\n");
	}*/

	/*char str[] = "ABCD";
	int k = 0;
	printf("请输入左移的字符个数：");
	scanf("%d", &k);
	Left_Move_K(str, k);
	printf("%s", str);*/
	system("pause");
	return 0;
}