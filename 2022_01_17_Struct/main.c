#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	double score;
};

int main()
{
	int a = 10;
	printf("%p\n", &a);
	int* pa = &a;//*����ָ������
	//int˵��ָ��ָ��ı�����int�͵�

	*pa = 22;
	printf("%d\n", a);

	struct Stu s = {"����", 20, 85.2};

	printf("1: %s %d %.2f\n", s.name, s.age, s.score);
	
	struct Stu * p = &s;
	printf("2: %s %d %.1f\n", p->name, p->age, p->score);

	return 0;
}