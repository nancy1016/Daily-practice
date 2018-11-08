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
//	//先所有数字异或，异或的结果就是不相同的两个数字
//	int tmp = 0;
//	int pos = 0;
//	for (int i = 0; i < size; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//找出异或结果中bit为1的位置所在
//	for (int i = 0; i < sizeof(int)* 8; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//		{
//			pos = i;//将bit为1的那一位所在的位置保存下来
//			break;
//		}
//	}
//	//按照pos位为1对数组中的元素进行分组
//	for (int i = 0; i < size; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//pos位为1分在一组，最后异或的结果就是这组中不同的数字
//		{
//			n.num1 ^= arr[i];
//		}
//		else
//		{
//			n.num2 ^= arr[i];//pos位为0分在另一组，最后异或的结果就是另一组中不同的数字
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
	//int empty = money;//empty代表空瓶子个数
	//int total = money;//total代表已经喝了的饮料瓶数
	//while (empty >= 2)
	//{
	//	total = total + empty/2;
	//	empty = empty / 2 + empty % 2;//注意这里一定要 + empty % 2，比如当剩下3个空瓶时，可以换3/2+3%2=2瓶水
	//	
	//}
	//printf("total=%d\n", total);

	/*int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5 };
	Num _num=Find_notdouble(arr, sizeof(arr) / sizeof(arr[0]));
	printf("只出现一次的两个数字为：");
	printf("%d %d", _num.num1, _num.num2);*/


	//int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//int i, j;
	////外循环：每次选取一个元素
	//for ( i = 0; i < size; i++)
	//{
	//	//内循环：将其他元素与选取的那个元素进行比较
	//	for ( j = 0; j < size; j++)
	//	{
	//		if (i != j&&arr[i] == arr[j])
	//		{
	//			break;
	//		}
	//	}
	//	//来到这里有两种情况：（1）有与之相同的元素（break执行）（2）遍历完毕也没有找到相同元素，这时j==size
	//	if (j==size)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//}
	system("pause");
	return 0;
}