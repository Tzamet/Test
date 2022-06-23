#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int a = N,i=0;
	while (a != 0)
	{
		a /= 10;
		i++;
	}
	if (i == 0)
	{
		printf("ling");
		return 0;
	}
	a = N;
	char *prr[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	int arr[9] = {0};
	if (N < 0)
	{
		printf("fu ");
		a *= (-1);
	}

	for (int j = 0; j < i; j++)
	{
		arr[j] = a % 10;
		a /= 10;
	}
	int I = i;
	for (i=i-1; i >= 0; i--)
	{
		printf("%s", prr[arr[i]]);
		if (I>1)
			printf(" ");
		I--;
	}
	return 0;
}