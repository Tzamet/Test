#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void wages(float y, float w);
int main()
{
	float y, w;
	scanf("%f%f", &y,&w);
	wages(y, w);
	return 0;
}
void wages(float y, float w)
{
	float m;
	if (y >= 5)
	{
		if (w > 40)
			m = 2000 + (w - 40) * 75;
		else
			m = w * 50;
	}
	else
	{
		if (w > 40)
			m = 1200 + (w - 40) * 45;
		else
			m = w * 30;
	}
	printf("%0.2f", m);
}