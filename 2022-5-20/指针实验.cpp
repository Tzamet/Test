#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a=32;//计算机定义a时所开辟的空间就是 &a 也就是a的地址 
	int *d=&a;
	cout<<a<<endl<<*d;
	printf("%c",a) 
	return 0;
}
