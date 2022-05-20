#include <iostream>
#include <stdio.h>       	 
using namespace std; 
int main()
{
	int a,b;
	char c,d;//如果想要输出的格式正确，设定的变量格式一定要正确 
	cin>>a>>b>>c>>d;//想要使用cin、cont语句一定要用头文件iostream 
	cout<<a<<b<<endl<<"c="<<c<<d; //endl是换行的语句 加""号就输出"" 
	return 0;
}
