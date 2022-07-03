#include<iostream>
using namespace std;
//扑克牌猜数
void trick(int arr[],int c,int num);
void trick(int arr[],int c,int num)
{
    int n,x,i,j;
    j=num;i=c;
    x=(arr[i]+arr[j])/2;
    printf("我是不是比%d大？",x);
    cin>>n;
    switch(n*=1)
    {
        case 1:i=x-1;break;
        case 0:j=x-1;break;
    }
    cout << arr[i]<<' '<<arr[j]<<endl;
    if (arr[i]>arr[j])
    {
        cout << "Error" << endl;
        
    }
    trick(arr,i,j);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int num=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    trick(arr,i,num-1);
    return 0;
}