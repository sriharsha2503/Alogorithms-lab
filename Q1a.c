#include<stdio.h>
int min(int a,int b)
{
	int min;
	if(a>b)
		min=a;
	else
		min=b;
	return min;
}
int gcd(int m,int n)
{
	int t;
	int opcount=1;
	t=min(m,n);
	while(t!=0)
	{
		opcount++;
		if((m%t==0)&&(n%t==0))
		{
			printf("opcount=%d\n",opcount);
			return t;
		}
		t--;
	}
}
int main()
{
	int m,n;
	printf("enter m and n values for computing integer checking method \n");
	scanf("%d",&m);
	scanf("%d",&n);
	printf("sum of m and n is %d",m+n);
	printf("Gcd of two numbers %d and %d using consecutive integer method is %d\n",m,n,gcd(m,n));
	return 0;


}