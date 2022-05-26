#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void m_s(int N, int U, int D);

int main()

{
	int N, U, D;
	scanf("%d%d%d", &N, &U, &D);
	if (D<U&&N <= 100)
		m_s(N, U, D);
	return 0;
}

void m_s(int N, int U, int D)
{
	int x = 0, y = 0;
	while (x < N)
	{
		y++;
		if (y % 2 == 0)

			x -= D;

		else
			x += U;

	}
	printf("%d", y);
}