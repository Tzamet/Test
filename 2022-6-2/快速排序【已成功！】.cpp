#include<iostream>
using namespace std;
void per(int*p,int l,int r);    
int main()
{
	int arr[]={9,7,10,26,32,14};
	int num;
	num=sizeof(arr)/sizeof(arr[0]);
	int*p;
	int l=0;
	p=arr;
	per(p,l,num);
	for(int i=0;i<num;i++)
		cout<<arr[i]<<' ';
	return 0;
}
void per(int*p,int l,int r)
{
	if(l>r-1)
	return;
	int x=p[l];
	int i=l;
	int j=r;
	while(i != j)
	    {
	        while(p[j] >= x && j > i)
	            j--;
	        while(p[i] <= x && j > i)
	            i++;
	        if(j > i)
			{
	            int t = p[i];
	            p[i] = p[j];
	            p[j] = t;
	        }
	    }
	    p[l] = p[i];
	    p[i] = x;
	    per(p, l, i-1);
	    per(p, i+1, r);
}

   

