#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "add.h"
#define MAXN 10

int Sum(int List[], int N);

int main()
{
	int List[MAXN], N, i;

	scanf("%d", &N);
	for (i = 0; i<N; i++)
		scanf("%d", &List[i]);
	printf("%d\n", Sum(List, N));

	return 0;
}
