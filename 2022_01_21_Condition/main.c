#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int num = 0;
	int mod = 0;

	printf("Input = ");
	scanf("%d", &num);

	mod = num % 2;

	if (mod == 0)
		printf("%d ��ż��\n", num);

	else
		printf("%d ������\n", num);

	return 0;
}