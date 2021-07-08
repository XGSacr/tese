#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 1;
	int b = 0;
	b = a + --a;
	printf("%d %d %d\n", b);
	system("pause");
	return 0;
}