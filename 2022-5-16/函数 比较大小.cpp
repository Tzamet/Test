#include <iostream>
using namespace std;
int js(int);//����������   ���Կ������������Ͷ��庯���������ֻ�����ޡ�;�� 
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
