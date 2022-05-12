#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <cmath>

int IsTheNumber(const int N);

int main()
{
	int n1, n2, i, cnt;

	scanf("%d %d", &n1, &n2);
	cnt = 0;
	for (i = n1; i <= n2; i++) {
		if (IsTheNumber(i))
			cnt++;
	}
	printf("cnt = %d\n", cnt);

	return 0;
}

int IsTheNumber(const int N)
{
	int k = 0, n, a[5];
	n = N;
	while (n != 0)
	{
		k++;//NµÄÎ»Êý
		n /= 10;
	}
	if (k > 2)
	{
		double V = pow(10, k-1);
		int v = (int)V;
		a[0] = N / v;
		for (int i = 1; i < k; i++)
		{
			double V1 = pow(10, k - i - 1);
			int v1 = (int)V1;
			a[i] = N / v1 % 10;
		}
		int *p=a,u,cn=0,ci=0,S,s;
		for (int i = 0; i < k; i++)
		{
			u = a[i];
			for (int j = i+1; j < k;j++)
			if (p[j] == u)
				cn++;
		}
		S =(int) sqrt(N);
		s = S*S;
		if (s = S)
			ci++;
		if (ci>0 || cn > 0)
			return 1;
		else return 0;
	}
	else return 0;

}