#include<iostream>
using namespace std;
int main()
{
	int a[5];
	for(int i=0;i<=4;i++){
		cin>>a[i];//TODO
	} 
	int *p;
	p=a;
	//what(p);
	printf("pʱ���%i ",p);
	printf("*pʱ���%d ",*p); 
	printf("*p���ָ��λ%d ",*(p+2));
	return 0;
}
//int what(int);
//int what(int *p)
//{
//	printf("%d",*p);
//}
