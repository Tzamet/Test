#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void cag(int n);

int main()
{
	int n;
	scanf("%d", &n);
	if (n>=1&&n<=9)
	cag(n);
	return 0;
}

void cag(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int l = 1; l <= i; l++)
		{
			int x;
			x = l*i;
			printf("%d*%d=%-4d", l, i, x);
		}
		printf("\n");
	}
}