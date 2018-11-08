#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void Left_Move_K(char arr[], int k)
//{
//	assert(arr);
//	assert(k > 0 && k <= strlen(arr));
//	int len = strlen(arr);
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
//	strcpy(tmp, str);
//	strncat(tmp, str, len_str);
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
//}

int main()
{

	char str1[] = "ABCD";
	Reverse_K(str1, 2);
	printf("%s", str1);


	/*char str1[] = "AABCD";
	char str2[] = "BCDAA";
	int ret = Judge_str(str1, str2);
	printf("%d", ret);*/

	/*char str[] = "ABCD";
	int k = 0;
	printf("请输入左移的字符个数：");
	scanf("%d", &k);
	Left_Move_K(str, k);
	printf("%s", str);*/
	system("pause");
	return 0;
}