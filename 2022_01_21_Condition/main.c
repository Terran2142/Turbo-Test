#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//if else���������
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
//		printf("%d ��ż��\n", num);
//
//	else
//		printf("%d ������\n", num);
//
//	return 0;
//}


//switch���������
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
		printf("������\n");
		break;
	case 2:
		printf("��Ϣ��\n");
		break;
	case 3:
		printf("error!\n");
		break;
	}

	return 0;
}