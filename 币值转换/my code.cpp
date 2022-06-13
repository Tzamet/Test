#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void transform(int N);
int main()
{
	int N;
	scanf("%d", &N);
	transform(N);
	return 0;
}

void transform(int N)
{
	int x = N, X = 0, Y = N;
	while (x != 0)
	{
		x /= 10;
		X++;
	}
	int arr[9],z=10;
	char Num[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
	char Unit[5] = { 'S', 'B', 'Q', 'W', 'Y' };
	for (x = 0; x < X; x++)
	{
		arr[x] = Y%10;
		Y /= 10;
	}
	int *p = arr,T=X,t=0;

	while (T>0)//定位 千 万 亿 t=1(千) t=2(万) t=3(亿)
	{
		T -= 4;
		t++;
	}
	T = X;
	while (T > 4)//定位 个十百
		T %= 4;
	if (X>1)
	{
		
			for (int i = X - 1; i > 0; i++)
			{
				if (T > 1)
					printf("%c%c", Num[p[i]], Unit[t - 1]);
				else (T == 1)
				{
					printf("%c", Unit[t+2]);
					t -= 4;
				}
				t++;

			}
			if (arr[0] != 0)//arr[0]
				printf("%c", Num[p[0] - 1]);
			else 0;
		
		
	}

}


