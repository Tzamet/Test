#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"median.h"
#define MAXN 10

typedef float ElementType;


int main()
{
	ElementType A[MAXN];
	int N, i;

	scanf("%d", &N);
	for (i = 0; i<N; i++)
		scanf("%f", &A[i]);
	printf("%.2f\n", Median(A, N));

	return 0;
}