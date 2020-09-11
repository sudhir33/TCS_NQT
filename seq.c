#include<stdio.h>
#include<math.h>
//2 2 4 3 6 5 8 7 10 11 12 13 14 17.........
// 2 4 6 8 10.....
// 2 3 5 7 11......
int next_prime(n)
{
	int i,fc=0;
	while(1)
	{
		n=n+1;
		if(n%2==0)
		{
			continue;
		}
		fc=0;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				fc=1;
				break;
			}
		}
		if(fc==0)
		{
			return n;
		}
	}
}
int seq_fun(int pos,int n)//n2--> prime-->2 3 5 6
{
	int i=1;
	if(pos%2==0)
	{
		while(1)
		{
			if(i==pos/2)
			{
				return n;	
			}
			
			n=next_prime(n);
			i++;
		}
	}
	else
	{
		while(1)
		{
			if(i==pos/2+1)
			{
				return n;	
			}
			n=n+2;
			i++;
			
		}
	}
}


int main()
{
	int n=2,pos,res;
	scanf("%d",&pos);//9
	res=seq_fun(pos,n);//fun call  num n1   n2
	printf("%d",res);
	return 0;
}
