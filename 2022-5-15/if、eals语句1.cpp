#include <iostream>
#include <stdio.h>       	 
using namespace std; 
int main()
{
	int a,m;
	scanf("%d%d",&a,&m);
	if(a>=5)
	{
	    m-=a;
	    a--;
	} 
	else
	{
		m=a-m;
	    a++;}
	m=m>a?10:12;//三目运算，有点没玩明白 
	printf("%d\n%d\nx=",m,a);
	return 0;
}
