#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "ct_d.h"
int main()
{
	int N, D;

	scanf("%d %d", &N, &D);
	printf("%d\n", Count_Digit(N, D));
	return 0;
}