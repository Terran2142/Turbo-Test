#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int型函数需要有返回值，输入变量即可
//void型函数不需要返回值，但输入量需要指针型变量
//函数不带类型默认为int型

//int Get_Max(int a, int b)
//{
//	if (a >= b)
//		return a;
//
//	else
//		return b;
//}
//
//void Swap(int* pa, int* pb)
//{
//	int x = 0;
//	x = *pa;
//	*pa = *pb;
//	*pb = x;
//}

//int main()
//{
//	int a = 10, b = 20;
//
//	int max = Get_Max(a, b);
//	Swap(&a, &b);
//
//	printf("最大值 = %d\n", max);
//	printf("交换后 a = %d b = %d\n", a, b);
//
//	return 0;
//}

//函数的嵌套调用和链式访问
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		new_line();
//}

//int main()
//{
//	new_line();
//	three_line();
//
//	return 0;
//}


//函数的定义与声明
//int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}


//加减运算的分文件实现
//#include "add.h"
//#include "sub.h"
//
//int main()
//{
//	int a = 20;
//	int b = 15;
//
//	printf("%d\n", Add(a, b));
//	printf("%d\n", Sub(a, b));
//
//	return 0;
//}


//函数递归
int sim_strlen(char* str)
{
	if (*str != '\0')
		return 1 + sim_strlen(str + 1);
	else return 0;
}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}

int Fib(int n)
{
	int sum = 1;
	int a = 1, b = 1;

	while (n > 2)
	{
		sum = a + b;
		a = b;
		b = sum;
		n--;
	}
	return sum;
}

int main()
{
	//char arr[] = "bit";

	//printf("%d", sim_strlen(arr));

	int n = 0;
	scanf("%d", &n);

	int num = Fib(n);

	printf("第 %d 个数是： %d\n", n, num);

	return 0;
}