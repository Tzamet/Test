#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void pai(float x);
int main()
{
	float x;
	scanf("%f", &x);
	pai(x);
	return 0;
}
void pai(float x)
{
	float arr = 1, add = 2;
	float i = 1, down = 1, n=1;
	while (add>x)
	{
		float up = 1;
		for (int l = 1; l <= i; l++)
			up *= l;
		n = 2 * i + 1;
		down *= n;
			add = up / down;
			arr += add;
		i++;
	}
	printf("%0.6f", 2*arr);
}