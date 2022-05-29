#include<iostream>
using namespace std;
void per(int*p,int r);  
void Er_fen(int *p, int sz,int n)  ;
int main()
{
	printf("输入数组个数：\n");
	int n;
	cin>>n;
	int arr[n];
	printf("输入数组元素：\n"); 
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int num=sizeof(arr)/sizeof(arr[0]);
	int*p;
	p=arr;
	per(p,num);
	for(int i=0;i<num;i++)
		cout<<arr[i]<<' ';
	printf("要查找的数：\n") ;
	int x;cin>>x;
	Er_fen(p,num,x);
	return 0;
}
void per(int*p,int r)
{
	for(int l=0;l<r-1;l++)
	{
		if(l>r-1)
		return;
		int x=p[l];
		int i=l;
		int j=r;
		while(i!=j)
			{
			    while(p[j]>=x&&j>i)
			        j--;
			    while(p[i]<=x&&j>i)
			        i++;
			    if(j > i)
				{
			        int t=p[i];
			        p[i]=p[j];
			        p[j]=t;
			    }
			}
			p[l]=p[i];
			p[i]=x;
			l++;
	}
	for(int l=r;l<r-1;l--){
	    if(l>r-1)
		return;
		int x=p[l];
		int i=l;
		int j=r;
		while(i!=j)
			{
			    while(p[j]>=x&&j>i)
			        j--;
			    while(p[i]<=x&&j>i)
			        i++;
			    if(j > i)
				{
			        int t=p[i];
			        p[i]=p[j];
			        p[j]=t;
			    }
			}
			p[l]=p[i];
			p[i]=x;
			l++;		
	}
}

void Er_fen(int *p, int sz,int n)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (n < p[mid])
		{
			right = mid - 1;
		}
		else if (n>p[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了是： %d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了");
	}
}

   
