#define _CRT_SECURE_NO_WARNINGS 1
typedef float ElementType;
ElementType Median(ElementType A[], int N)
{
	int j = 0;
	while (j != N - 1)
	{
		for (int i = 1; i < N; i++)
		{
			if (A[i] >= A[i - 1])
				j++;
			else
			{
				int x = j + 1;
				while (A[x]<A[x - 1] && x != 0)
				{
					ElementType n = A[x];
					A[x] = A[x - 1];
					A[x - 1] = n;
					x--;
				}
				j++;
			}
		}

	}
	ElementType n;
	if (N % 2 == 0)
		n = A[(N + 1) / 2];
	else
		n = A[(N + 1) / 2 - 1];

	return n;
}