#include <iostream>
#include <stdio.h>
using namespace std;
int main()//�������ʱ ��a[100]��Ҫ����main���������棬����main����ᱨ�� 
{
	int mun=0,a[5];//��������ʱ���ܶ�������г�ʼ�� a[5]={0��1��2��3��4} 
    for(int i=1;i<=5;i++)
		{
			cin>>a[i];
			mun+=a[i];
		} 
		int sum=mun/5;
		cout<<sum;	
		return 0;
}
	//����������a��k��Ԫ�ظ��Ƶ�����b memcpy(b,a,sizeof(int)*k)
	//����Ǳ��������ı�intΪ��Ӧ����
	//���Ҫȫ�����Ƶ�b  memcpy(b,a,sizeof(a)*k)
	//������a���� menmset(a,0,siesof(a)) 
    //ʹ��memcpy��menmset������Ҫ�õ�ͷ�ļ� <cstring> 
