#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//typedef struct Num
//{
//	int num1;
//	int num2;
//}Num;
//
//Num Find_notdouble(int arr[], int size)
//{
//	Num n;
//	n.num1 = 0;
//	n.num2 = 0;
//	//����������������Ľ�����ǲ���ͬ����������
//	int tmp = 0;
//	int pos = 0;
//	for (int i = 0; i < size; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//�ҳ��������bitΪ1��λ������
//	for (int i = 0; i < sizeof(int)* 8; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//		{
//			pos = i;//��bitΪ1����һλ���ڵ�λ�ñ�������
//			break;
//		}
//	}
//	//����posλΪ1�������е�Ԫ�ؽ��з���
//	for (int i = 0; i < size; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//posλΪ1����һ�飬������Ľ�����������в�ͬ������
//		{
//			n.num1 ^= arr[i];
//		}
//		else
//		{
//			n.num2 ^= arr[i];//posλΪ0������һ�飬������Ľ��������һ���в�ͬ������
//		}
//	}
//	return n;
//}

int main()
{
	int a = 2;
	int b = 3;
	
	//int money = 0;
	//scanf("%d", &money);
	//int empty = money;//empty�����ƿ�Ӹ���
	//int total = money;//total�����Ѿ����˵�����ƿ��
	//while (empty >= 2)
	//{
	//	total = total + empty/2;
	//	empty = empty / 2 + empty % 2;//ע������һ��Ҫ + empty % 2�����統ʣ��3����ƿʱ�����Ի�3/2+3%2=2ƿˮ
	//	
	//}
	//printf("total=%d\n", total);

	/*int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5 };
	Num _num=Find_notdouble(arr, sizeof(arr) / sizeof(arr[0]));
	printf("ֻ����һ�ε���������Ϊ��");
	printf("%d %d", _num.num1, _num.num2);*/


	//int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//int i, j;
	////��ѭ����ÿ��ѡȡһ��Ԫ��
	//for ( i = 0; i < size; i++)
	//{
	//	//��ѭ����������Ԫ����ѡȡ���Ǹ�Ԫ�ؽ��бȽ�
	//	for ( j = 0; j < size; j++)
	//	{
	//		if (i != j&&arr[i] == arr[j])
	//		{
	//			break;
	//		}
	//	}
	//	//���������������������1������֮��ͬ��Ԫ�أ�breakִ�У���2���������Ҳû���ҵ���ͬԪ�أ���ʱj==size
	//	if (j==size)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//}
	system("pause");
	return 0;
}