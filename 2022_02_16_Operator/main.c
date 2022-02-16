#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//移位操作
//int main()
//{
//	int a = 2;
//
//	int b = a << 1;
//	int c = a >> 1;
//
//	printf("%d %d\n", b, c);
//
//	return 0;
//}


//位操作
//&：按位与
//|：按位或
//^：按位异或（相同为0，相异为1）
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	int x = a & b;
//	int y = a | b;
//	int z = a ^ b;
//
//	printf("%d %d %d\n", x, y, z);
//
//	return 0;
//}


//异或操作可以实现变量的交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("%d %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//利用移位和位操作可以实现特定二进制位的变化
//int main()
//{
//	int a = 13;
//
//	int b = a | (1 << 4);
//	int c = b & ~(1 << 4);
//	int d = b ^ (1 << 4);
//
//	printf("%d %d %d %d\n", a, b, c, d);
//
//	return 0;
//}


//地址操作
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//
//	int* pa = &a;
//	*pa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//整型提升
//不足int型大小的变量在计算式会被补充为int型大小进行计算，完成后截取合适位数存入结果中
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//
//	printf("%d\n", c);
//
//	return 0;
//}


int fun()
{
	static int count = 1;
	return ++count;
}

int main()
{
	int answer;

	answer = fun() - fun() * fun();
	printf("%d\n", answer);

	return 0;
}