#include<iostream>
using namespace std; //��ʵ��Ŀ�ģ��ҵ����Ӻ����иı�ԭ�������������˳��ķ��� 
int per(int *p,int num);    
int main()//1.�Ӻ�����ָ�����ԭ������arr�ĵ�ַ 
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
//���ڳɹ��ˣ���
//�����������д���ָ�룬�Ӻ��������������ĵ�ַ�� 
