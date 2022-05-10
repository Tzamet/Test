#define _CRT_SECURE_NO_WARNINGS 1
typedef float ElementType;
ElementType Average(ElementType S[], int N)
{
	ElementType n = 0;
	for (int i = 0; i<N; i++)
		n += S[i];
	n = n / N;
	return n;
}