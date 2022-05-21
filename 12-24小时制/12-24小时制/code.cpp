#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Tm_cg(int x, int y);
int main()
{
	int x, y;
	scanf("%d:%d", &x, &y);
	Tm_cg(x, y);
	return 0;
}
void Tm_cg(int x, int y)
{
	int n = x;
	if (x > 12)
		n = x - 12;
	if (x >= 0 && x < 12)
		printf("%d:%d AM", n, y);
	else if (x >= 12 && x < 24)
		printf("%d:%d PM",n,y);
}