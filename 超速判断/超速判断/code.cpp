#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if (n > 60)
		printf("Speed: %d - Speeding",n);
	else
		printf("Speed: %d - OK",n);
	return 0;
}