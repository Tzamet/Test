#include<iostream>//本函数的最终目的是通过二分法查找某个数失否存在在数组中，而二分法的使用首先得保证数组是有序的，所以第二步应该是排序 
#include<stdio.h>
using namespace std;

//void xier(int arr[],int num);
//int per(int x);
//int per(int *p,int num);
//int add(int );
int main()
{
	int arr[]={3,6,4,2,1};
	//int x=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<=4;i++)
	cout<<arr[i]<<' ';
	return 0;
	//	int n;
	//	printf("确定数组n大小:\n");
	//	scanf("%d",&n);/*确定一维数组的大小（有多少个数）*/
	//	int arr[n];
	//	for(int i=0;i<n;i++)
	//	{
	//		cin>>arr[i];/*到这创建一个数组*/
		//	if(a[i]=)                                        应该加个中断条件 
	//	}
		//int num;
	//	int *p;
	//	p=arr;
		//num=(int)sizeof(arr)/sizeof(*arr); 另一种求法 
		//num=sizeof(arr)/sizeof(arr[0]);
		//printf("%d ",num);
		/*传给排序函数*/
	//	add(*p);
		//per(arr,num);
} 


//int add(int &a)
//{
//	for(int i=0;i<=4;i++)
//	printf("%d",a);
//	return 0;
//}


/*排序程序 这里选快速排序*/
//int per(int &a,int num)
//{
//	int l,r;
//	//int arr[num];
//	l=0;r=num-1;
//	int x=p[l];
//	while(l<r)
//	{
//		while(l<r&&p[r]>=x) 
//		r--;  
//		if(l<r) 
//		{
//		    p[l]=p[r];
//		    l++;
//		}
//		while(l<r&&p[l]<x)
//		    l++;  
//		if(l<r) 
//		    {
//		        p[r]=p[l];
//		        r--;
//		    }
//	
//	} 
//		p[l]=x;
//	//arr[0]=*(p+1); 
//	//if(a[i]<*(p+i)) i++;else a[i]= 
//	//（这里的指针为什么可以直接当数组用？？）cout<<p[l+2];
//	for(int i=0;i<num;i++)
//	cout<<p[i]<<' ';
//	return 0;
//}

/*二分法查找*/
//int two()


//希尔排序
//void xier(int arr[],int num)
//{
//	for(int i=0;i<=num;i++){
//		int n=arr[0];
//		if(n>arr[i])
//		arr[i]=n;//TODO
//	}
//}

//结构体
//int per(int x)
//{
//	struct WTF
//	{
//		int a[2];
//		
//	}wtf_a,wtf_b;	int l,r,x;

//二分法的一种尝试 
//	l=0;r=num-1;
//	x=p[i];
//	while(l<r)
//	{
//		if(p[r]>=x)
//		r--;
//		else
//		{
//			p[l]=p[r];
//			l++;
//		}
//		if(p[l]<=x)
//		l++;
//		else
//		{
//			p[r]=p[l];
//			r--;
//		}
//		p[r]=x;
//	}	
//	int l,r,x;
//	l=i;r=num-1;
  //  if(l<r)
    //{
      //  i=l,j=r,x=p[l];
        //while (i<j)
        //{
          //  while(i<j&&p[j]>=x)
            //    j--;  
//            if(i<j) 
//              p[i++]=p[j];
//            while(i<j&&p[i]<x)
//               i++;  
//            if(i < j) 
//                p[j--] = p[i];
//        }
//        p[i]=x;
//}

 
 
 
 
 
 
 
 
 
