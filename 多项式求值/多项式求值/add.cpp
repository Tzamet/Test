#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
double f(int n, double a[], double x)
{
	double n1=0, n2=0;
	for (int i = 0; i <= n; i++)
	{
		n1 = pow(x, i);
		n2 += n1*a[i];
	}
	return n2;
}