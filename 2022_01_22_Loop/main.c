#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}


//EOF - End Of File
//int main()
//{
//	int ch = 0;
//	//Ctrl + Z - ��ȡ����
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//
//		putchar(ch);
//	}
//
//	return 0;
//}


//forѭ�����
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 2)
//			i = 4;
//
//		if (i == 6)
//			i = 8;
//
//		printf("%d\n", i);
//	}
//
//	return 0;
//}


//forѭ������-ʡ�Դ�����������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//�жϲ���ʡ��-�жϺ�Ϊ��
//	for (i = 0; i < 3; i++)
//	{
//		for(j = 0; j < 3; j++)
//			printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//
//	return 0;
//}


//do whileѭ��
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//ѭ����ϰ
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	int n = 0;
//
//	scanf("%d", &n);
//
//	/*for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//			ret *= j;
//		sum += ret;
//	}*/
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//�ַ����ȽϺ���strcmp
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//������ȷ������123456
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else if (i < 2)
//		{
//			printf("��¼ʧ�ܣ�����������\n");
//		}
//		else
//		{
//			printf("�����������3�Σ���¼ʧ�ܣ��˳�����\n");
//		}
//	}
//
//	return 0;
//}


//��������Ϸ����
//��ʼĿ¼����
void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 0.exit *****\n");
	printf("******************\n");
}


//�����ֵ���Ϸ����
void game()
{
	//����һ�������
	int r = rand() % 100 + 1;
	
	//�����ֵĹ���
	int num = 0;
	printf("������һ�����֣�>");

	while (1)
	{
		scanf("%d", &num);

		if (num < r)
		{
			printf("��С�ˣ�����������һ�����֣�>");
		}

		else if (num > r)
		{
			printf("�´��ˣ�����������һ�����֣�>");
		}

		else
		{
			printf("��ϲ�㣬�¶��ˣ������ǣ�%d\n", r);
			break;
		}
	}
}

//��������Ϸ������
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while(input);

	return 0;
}