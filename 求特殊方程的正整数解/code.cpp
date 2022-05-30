#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void cage(int N);
int main()
{
	int N;
	scanf("%d", &N);
	cage(N);

	return 0;
}
void cage(int N)
{

	float n = (float)N;
	n = sqrt(n);
	float a;
	int y = (int)n; int v = 0;
	for (y; y >= 0; y--)
	for (float x = 1; x <= y; ++x)
	{
		a = x*x + y*y;
		if (a == N)
		{
			v = (float)x;
			printf("%d %d\n", v, y);
		}

	}
	if (v == 0)
		printf("No Solution");
}