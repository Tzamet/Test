#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void put(int x, int y);
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	put(x, y);
	return 0;
}
void put(int x, int y)
{
	int n = 0,sum=0;
	for (int i = x; i <= y; i++)
	{
		if (n != 0)
		{
			if (n % 5 == 0)
				printf("\n");
		}
		
		n++;
		printf("%5d", i);
		sum += i;

		
	}
	printf("\nSum = %d", sum);
}