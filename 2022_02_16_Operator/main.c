#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��λ����
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


//λ����
//&����λ��
//|����λ��
//^����λ�����ͬΪ0������Ϊ1��
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


//����������ʵ�ֱ����Ľ���
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


//������λ��λ��������ʵ���ض�������λ�ı仯
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


//��ַ����
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


//��������
//����int�ʹ�С�ı����ڼ���ʽ�ᱻ����Ϊint�ʹ�С���м��㣬��ɺ��ȡ����λ����������
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