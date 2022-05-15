#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "even.h"

int main()
{
	int n;

	scanf("%d", &n);
	if (even(n))
		printf("%d is even.\n", n);
	else
		printf("%d is odd.\n", n);

	return 0;
}


