#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void utter(float open, float close, float high, float low);
int main()
{
	float open, high, low, close;
	scanf("%f%f%f%f", &open, &high, &low, &close);
	utter(open, close, high, low);
	return 0;
}
void utter(float open, float close, float high, float low)
{
	int n = 0, m = 0;
	if (open > close)
	{
		printf("BW-Solid");
		if (low < close)
			n++;
		if (high>open)
			m++;
	}
	else if (open < close)
	{
		printf("R-Hollow");
		if (low < open)
			n++;
		if (high>close)
			m++;
	}
	else
	{
		printf("R-Cross");
		if (low < open)
			n++;
		if (high>close)
			m++;
	}
	if (n > 0 && m == 0)
		printf(" with Lower Shadow");
	else if (n == 0 && m > 0)
		printf(" with Upper Shadow");
	else if (n>0&&m>0)
		printf(" with Lower Shadow and Upper Shadow");

}