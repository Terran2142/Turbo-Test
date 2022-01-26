#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

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
//	//Ctrl + Z - 读取结束
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


//for循环语句
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


//for循环变种-省略代码会带来问题
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//判断部分省略-判断恒为真
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


//do while循环
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


//循环练习
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


//字符串比较函数strcmp
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设正确密码是123456
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else if (i < 2)
//		{
//			printf("登录失败，请重新输入\n");
//		}
//		else
//		{
//			printf("密码输入错误3次，登录失败，退出程序！\n");
//		}
//	}
//
//	return 0;
//}


//猜数字游戏程序
void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 0.exit *****\n");
	printf("******************\n");
}//开始目录函数

void game()
{
	return 0;
}//猜数字游戏的主程序

int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while(input);

	return 0;
}