#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//if else型条件语句
//int main()
//{
//	int num = 0;
//	int mod = 0;
//
//	printf("Input = ");
//	scanf("%d", &num);
//
//	mod = num % 2;
//
//	if (mod == 0)
//		printf("%d 是偶数\n", num);
//
//	else
//		printf("%d 是奇数\n", num);
//
//	return 0;
//}


//switch型条件语句
int main()
{
	int day = 0;
	int week = 0;

	scanf("%d", &day);

	if (day >= 1 && day <= 5)
		week = 1;
	else if (day >=5 && day <= 7)
		week = 2;
	else
		week = 3;

	switch (week)
	{
	case 1:
		printf("工作日\n");
		break;
	case 2:
		printf("休息日\n");
		break;
	case 3:
		printf("error!\n");
		break;
	}

	return 0;
}