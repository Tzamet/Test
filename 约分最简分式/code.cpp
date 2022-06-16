#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, x, y, m, n;
	scanf("%d/%d", &a, &b);
	for (x = 1; x <= a; x++)
	{
		m = b;
		m *= x;
		for (y = 1; y <= b; y++)
		{
			n = a;
			n *= y;
			if (m == n)
				break;
		}
		if (m == n)
			break;
	}
	if (m == n)
	printf("%d/%d", x, y);
	else printf("%d/%d", a, b);
	return 0;
}