#include <iostream>
using namespace std;
int js(int);//����������   ���Կ������������Ͷ��庯���������ֻ�����ޡ�;�� 
int js(int n) //���庯����
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
	sum+=js(i);//�����ĵ��� 
	cout<<"sum="<<sum<<endl;
	return 0;
}
