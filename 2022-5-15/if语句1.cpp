#include <iostream>
#include <stdio.h>       	 
using namespace std; 
int main()
{
	int a,n,m;
	scanf("%d%d%d",&a,&m,&n);
	if(a>=5){
	m-=n;
	} 
	else a++;
	printf("%d\n%d",m,a);
	return 0;
}
