#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void rabbit(int T);
int main()
{
	int T;
	scanf("%d", &T);
	rabbit(T);
	return 0;
}

void rabbit(int T)
{
	int A = 0, B = 0, X = 0;//AÎÚ¹ê¡¢BÍÃ×Ó

	while (X < T)
	{
		X++;
		A += 3;
		B += 9;
	
		if (X % 10 == 0 && X < T&&B>A)
		{
			for (int i = 0; i < 30; i++)
			{
				X++;
				A += 3;
				if (X == T)
					break;
			}
		}
	}





	int arr = A - B;
	if (arr>0)
		printf("@_@ %d",A);
	else if (arr < 0)
		printf("^_^ %d",B);
	else printf("-_- %d", A);
}