#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
typedef float ElementType;
ElementType Median(ElementType A[], int N)
{
	for (int i = 0; i<N; i++)
	{
		ElementType temp = A[i];
		int left = 0;
		int right = i - 1;
		int middle = 0;
		while (left <= right)
		{
			middle = (left + right) / 2;
			if (temp<A[middle])
			{
				right = middle - 1;
			}
			else
			{
				left = middle + 1;
			}
		}
		for (int j = i - 1; j >= left; j--)
		{
			A[j + 1] = A[j];
		}
		if (left != i)
		{
			A[left] = temp;
		}
	}
	ElementType n;
	if (N % 2 == 0)
		n = A[(N + 1) / 2];
	else
		n = A[(N + 1) / 2 - 1];

	return n;

}
