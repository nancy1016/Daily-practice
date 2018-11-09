#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void Left_Move_K(char arr[], int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	k %= len;//k�п��ܴ����ַ����ĳ��ȣ�����Ҳ�Ǻ���ģ��൱��ת��һȦ��Ȼ������
//	for (int i = 0; i < k; i++)//k����Ų��������ע�ⲻ�Ǵ�����
//	{
//		//����һ���ַ��ȱ����������������ŵ�ĩβ
//		char tmp = arr[0];
//		//�������ݣ�����\0������������ǰŲ
//		for (int j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//ÿŲ��һ�֣���Ҫ��֮ǰ����ĵ�һ��Ԫ�طŵ����
//		arr[len - 1] = tmp;
//	}
//}


//�����ַ���
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
	k %= len;//k�п��ܴ����ַ����ĳ��ȣ�����Ҳ�Ǻ���ģ��൱��ת��һȦ��Ȼ������
	Reverse(str, str + len - 1);//���巭ת
	Reverse(str, str + len - 1 - k);//�ٷ�תǰ�벿��
	Reverse(str + len - k, str + len - 1);//��ת��벿��	
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
//		printf("����ռ�ʧ�� ��\n");
//		exit(1);
//	}
//	strcpy(tmp, str);
//	strncat(tmp, str, len_str);
//	char*p = strstr(tmp, substr);//ע�����ﲻ����tmp���գ���Ϊ������ҵ����򷵻ص����ִ���һ�γ��ֵ�λ�ã��������tmp���գ���free��tmp)��ַ�ͱ��ˣ�����free��ԭ�������ڴ�ռ����ʼ��ַ��
//	if (p&&len_substr == len_str)//����һ��Ҫ���ռ���û�п��ٳɹ�
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
		printf("str2��str1��ת����Ĵ�\n");
	}
	else
	{
		printf("str2����str1��ת����Ĵ�\n");
	}



	/*char str1[] = "AABCD";
	char str2[] = "BCDAU";
	int ret = Judge_str(str1, str2);
	if (ret == 1)
	{
		printf("str2��str1��ת����Ĵ�\n");
	}
	else
	{
		printf("str2����str1��ת����Ĵ�\n");
	}*/

	/*char str[] = "ABCD";
	int k = 0;
	printf("���������Ƶ��ַ�������");
	scanf("%d", &k);
	Left_Move_K(str, k);
	printf("%s", str);*/
	system("pause");
	return 0;
}