#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void electronic(int x, char X, int y);
int main()
{
	int x, y;
	char X;
	scanf("%d %c %d", &x, &X, &y);
	electronic(x, X, y);
	return 0;
}
void electronic(int x, char X, int y)
{
	int sum,s;
	s = X;
	if (s >= 37 && s <= 47)
	{
		switch (X)
		{
		case '+':
		{
					sum = x + y;
					break;
		}
		case '-':
		{
					sum = x - y;
					break;
		}
		case'*':
		{
				   sum = x*y;
				   break;
		}
		case'/':
		{
				   sum = x / y;
				   break;
		}
		case'%':
		{
				   sum = x%y;
				   break;
		}
			/*default:
			{
			printf("ERROR");
			break;
			}*/
		}
		printf("%d", sum);
	}
	else
		printf("ERROR");

}