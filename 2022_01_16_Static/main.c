#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern s;

int test()
{
	static int a = 0;
	a++;
	return a;
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		int x = test();
		x = x + s;
		printf("%d\n", x);
		i++;
	}

	return 0;
}