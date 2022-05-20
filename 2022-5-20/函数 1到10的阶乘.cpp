#include <iostream>
using namespace std;
int js(int);//函数的声明   可以看出，声明语句和定义函数体的区别只是有无“;” 
int js(int n) //定义函数体
{
	int s=1;
	for(int i=1;i<=n;++i)
	s*=i;
	return s;
}
int main()
{
	int sum=0; 
	for(int i=1;i<=10;++i)
	sum+=js(i);//函数的调用 
	cout<<"sum="<<sum<<endl;
	return 0;
}
