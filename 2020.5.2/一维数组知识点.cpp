#include <iostream>
#include <stdio.h>
using namespace std;
int main()//数组过大时 如a[100]需要放在main函数的外面，放在main里面会报错 
{
	int mun=0,a[5];//定义数组时就能对数组进行初始化 a[5]={0，1，2，3，4} 
    for(int i=1;i<=5;i++)
		{
			cin>>a[i];
			mun+=a[i];
		} 
		int sum=mun/5;
		cout<<sum;	
		return 0;
}
	//如果想把数组a中k个元素复制到数组b memcpy(b,a,sizeof(int)*k)
	//如果是别的类型则改变int为相应类型
	//如果要全部复制到b  memcpy(b,a,sizeof(a)*k)
	//把数组a清零 menmset(a,0,siesof(a)) 
    //使用memcpy、menmset函数需要用到头文件 <cstring> 
