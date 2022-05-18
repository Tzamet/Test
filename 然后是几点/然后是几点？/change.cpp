#define _CRT_SECURE_NO_WARNINGS 1
int change(int h_m, int run)
{
	int h, m;
	h = h_m / 100 * 60;
	m = h_m % 100;
	m = h + run + m;
	while (m >= 1440 || m < 0)
	{
		if (m >= 1440)
			m -= 1440;
		else if (m < 0)
			m += 1440;
	}
	if (m != 0)
	{
		h = m / 60 * 100;
		m = m % 60;
		h += m;
		return h;
	}
	else return 0;
}