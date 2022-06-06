#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void change(float cm);
int main()
{
	float cm;
	scanf("%f", &cm);
	change(cm);
	return 0;
}
void change(float cm)
{
	int x, y;
	float inch, foot;
	inch = cm / 30.48;
	foot = inch * 12;
	x = (int)inch;
	y = (int)foot;
	printf("%d %d", x, y);
}