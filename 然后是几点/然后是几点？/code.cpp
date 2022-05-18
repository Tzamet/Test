#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"change.h"
int main()
{
	int h_m, run, L, n=0;
	scanf("%d%d", &h_m, &run);
	L = change(h_m, run);
	for (int i = L; i != 0; i = i / 10)
				n++;
			if (n < 3)
				printf("0%d", L);
			else printf("%d", L);
			return 0;
	return 0;
}
