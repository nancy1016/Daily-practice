#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void*Memmove(void*dest, const void*src, int num)
//{
//	assert(dest);
//	assert(src);
//	char*pdest = (char*)dest;
//	const char*psrc = (const char*)src;
//	if (pdest > psrc&&pdest < psrc + num)
//	{
//		//�Ӻ���ǰ����
//		pdest = pdest + num - 1;
//		psrc = psrc + num - 1;
//		while (num)
//		{
//			*pdest = *psrc;
//			pdest--;
//			psrc--;
//			num--;
//		}
//	}
//	else
//	{
//		//��ǰ��󿽱�
//		while (num)
//		{
//			*pdest = *psrc;
//			psrc++;
//			pdest++;
//			num--;
//		}
//	}
//	return dest;
//}

char*Strchr(const char*str, int ch)
{
	assert(str);
	char*pstr = (char*)str;
	while (*pstr!='\0')
	{
		if (*pstr==ch)
		{
			return pstr;
		}
		pstr++;
	}
	return NULL;
}
int main()
{

	char*p = "abcdcfg";
	char*q=Strchr(p, 'c');
	if (q != NULL)
	{
		printf("�ҵ���\n");
		printf("%s", q);
	}
	else
	{
		printf("û�ҵ�\n");
	}
	
	/*char str[20] = "abcde";
	Memmove(str,str+1 , 3);
	printf("%s", str);*/
	system("pause");
	return 0;
}