#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Compare(int A, int B, int C);
int main()
{
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	Compare(A, B, C);
	return 0;
}
void Compare(int A, int B, int C)
{
	int x, y, z;
	x = A - B;
	y = A - C;
	z = B - C;
	if (x == 0)
		printf("C");
	else if (y==0)
		printf("B");
	else if (z == 0)
		printf("A");
}