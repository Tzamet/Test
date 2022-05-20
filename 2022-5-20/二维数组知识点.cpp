#include <iostream>
#include <cstring> 
using namespace std;
int main()
{
	int i,j;
	int a[2][3];
	for(i=1;i<=2;++i)
	   {for(j=1;j<=3;++j)
		cin>>a[i][j];}
	for(int i=1;i<=2;++i)
	{
		for(j=1;j<=3;++j)
		cout<<a[i][j];
		cout<<endl;
		//TODO
	}
	
	return 0;
}
