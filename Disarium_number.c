#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,s=0,c,f=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		d=n%10;
		f++;
		n/=10;
	}
	n=temp;
	while(temp)
	{
		d=temp%10;
		s+=pow(d,f);
		f--;
		temp/=10;
	}
	if(s==n)
	printf("True");
	else
	printf("False");

	
}