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
	printf("p时输出%i ",p);
	printf("*p时输出%d ",*p); 
	printf("*p向后指两位%d ",*(p+2));
	return 0;
}
//int what(int);
//int what(int *p)
//{
//	printf("%d",*p);
//}
