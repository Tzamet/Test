#include <iostream>
using namespace std;
void shoot(int arr[],int num);
int main()
{
	int arr[]={6,4,8,3};
	int num;
	num=sizeof(arr)/sizeof(arr[0]);
	shoot(arr,num);
	for(int i=0;i<num;i++)
	cout<<arr[i]<<' ';
	return 0;
}
void shoot(int arr[],int num)
{
	int l=0;
	for(int i=1;i<num;i++)
	{
		while(arr[i]<=arr[l])
		{
			int t=l;
			if(arr[i]>=arr[t-1])
			{
				int n=arr[l];
				arr[l]=arr[i];
				arr[i]=n;
			}
			else t--;
		}
		l++;
	}
}
