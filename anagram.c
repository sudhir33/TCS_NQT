/*
Problem: check if two strings are anagram or not

	Anagram examples:
		heart & earth
		listen & silent
sample input:
heart
earth
sample output:
True
*/









#include<stdio.h>

int string_len(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
int isanagram(char *str1,char *str2)
{
	int len1,len2,i,a[26]={0},b[26]={0};
	len1=string_len(str1);
	len2=string_len(str2);
	if(len1!=len2)
		return 0;
	for(i=0;i<len1;i++)
	{
		a[str1[i]-97]=1;
	}
	for(i=0;i<len2;i++)
	{
		b[str2[i]-97]=1;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	char str1[100],str2[100];
	scanf("%[^\n]s",&str1);
	scanf(" %[^\n]s",&str2);
	if(isanagram(str1,str2))//fun call 1/0
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
