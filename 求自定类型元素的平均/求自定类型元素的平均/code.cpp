#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Average.h"
#define MAXN 10
typedef float ElementType;

int main()
{
	ElementType S[MAXN];
	int N, i;
	scanf("%d", &N);
	for (i = 0; i<N; i++)
		scanf("%f", &S[i]);
	printf("%.2f\n", Average(S, N));
	return 0;
}

