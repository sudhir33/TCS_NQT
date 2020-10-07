#include<stdio.h>
char find_diff(char *s,char *t)
{
	int a[26]={0},b[26]={0},i;
	for(i=0;s[i]!='\0';i++)
	{
		a[s[i]-97]++;
	}
	for(i=0;t[i]!='\0';i++)
	{
		b[t[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=b[i])
		{
			return i+97;//98
		}
	}
	return 0;
}
//abcd
//abbcd
//1 1 1 1 0 0 0 0 0 0 0 0 0 0  ---> 1
//1 2 1 1 0 0 0 0 0 0 0 0 0 0  --->2
int main()
{
	char s[1000],t[1001];
	scanf("%[^\n]s",&s);
	scanf(" %[^\n]s",&t);
	printf("%c",find_diff(s,t));//fun call
	return 0;
}
