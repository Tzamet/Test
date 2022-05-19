#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int change(int n);
int main()
{
	int n;
	scanf("%d",& n);
	int l = change(n);
	printf("%d", l);
	return 0;
}
int change(int n)
{
	int a[3];
	a[0] = n / 100;
	a[1] = n / 10 % 10 * 10;
	a[2] = n % 10 * 100;
	return a[0] + a[1] + a[2];
}