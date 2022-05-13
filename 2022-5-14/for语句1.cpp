#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int i,m,n;
	cout<<"m="<<endl<<"n=";
	cin>>m>>n;
	for(i=1;i<=2;i++)
	{
		if(m>n)
		{
			m-=n;
			m++;//TODO
		}
		else
		{
			m=n-m;
			n++;
		}
	}
	cout<<m<<endl<<n;
}
