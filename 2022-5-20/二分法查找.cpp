#include<iostream>
#include<stdio.h>
using namespace std;
int two_disposition(int arr[],int n);
int main()
{
	printf("write your need numble:");
	int m;
	scanf("%d",&m);
	int arr[]={3,9,5,6,4,8};
	int re=two_disposition(arr,m);
	if(re!=-1)
	printf("%d",re);
	else
	printf("No Found"); 
	return 0; 
}
//快速排序
//void quick_sort(int,int,int);//函数定义最好放在头文件中 
//void quick_sort(int arr[],int x,int y)
//{
	
//}
//二分法查数 

int two_disposition(int arr[],int n)
{
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;int right=sz-1;
//	void copy(int a[], int b[], int size)
    //int 
    
	while(left<=right)
	{
		int mid;
		mid=(left+right)/2;
		if(arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else 
		{
			return mid;
		}
	}
	return -1;
}
