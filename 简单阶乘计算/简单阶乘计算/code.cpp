#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"ftr.h"
int main()
{
	int N, NF;

	scanf("%d", &N);
	NF = Factorial(N);
	if (NF)  printf("%d! = %d\n", N, NF);
	else printf("Invalid input\n");

	return 0;
}

