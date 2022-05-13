#include <stdio.h>
#include <math.h>
int IsTheNumber ( const int N );
int main()
{
    int n1, n2, i, cnt;
    scanf("%d %d",&n1,&n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) 
	{
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

int IsTheNumber ( const int N )
{
	int n=1;
	while(N/10!=0)
	n++;
	printf("%d",n);
	return 1;
}
