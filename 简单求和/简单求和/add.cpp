#define _CRT_SECURE_NO_WARNINGS 1
int Sum(int List[], int N)
{
	int n = 0;
	for (int i = 0; i<N; i++)
		n += List[i];
	return n;
}