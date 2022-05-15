#include <iostream>
using namespace std;
int js(int);//函数的声明   可以看出，声明语句和定义函数体的区别只是有无“;” 
int js(int n,int m)
{
	return n>m?n:m;
}
int main()
{
	int x,y,z;
	cout<<"x="<<endl<<"y=";
	cin>>x>>y;
	z=js(x,y);
	cout<<z;
	return 0;
}
