#include<iostream>
using namespace std; //本实验目的：找到从子函数中改变原函数数组的排列顺序的方法 
int per(int *p,int num);    
int main()//1.子函数用指针接收原函数中arr的地址 
{
	int arr[]={3,4,8,6,2};
	int  num;
	num=sizeof(arr)/sizeof(arr[0]);
	int*p;
	p=arr;
	per(p,num);
	return 0;
}
int per(int*p,int num)
{
	int l,r,x;
	l=0;r=num-1;
	x=p[l];p[l]=p[l+1];p[l+1]=x;
	cout<<x<<' '<<p[l]<<' '<<p[l+1];
	return 0;
}
//终于成功了！！
//先在主函数中创建指针，子函数接收主函数的地址。 
