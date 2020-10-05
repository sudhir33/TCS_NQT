/*
Problem Name: Unique Characters in a String
sample input: tcsnqt pratice
sample Output: tcsnqpraie

Algorithm:

0 0 0 0 0 0 0 0 0 0 0   0 0 0 0 0 1 0 0 0 0   0 0 0 0 0
0 1 2 3 4 5 6 7 8 9 10  1 2 3 4 5 6 7 8 9 20  1 2 3 4 5--> index
a b c d e f g h i j k   l m n o p q r s t u   v w x y z

tcsnpraie
*/
//1<=len(str)<=1000//
#include<stdio.h>
int main()
{
	char str[1000];//a-z-->97-122
	int i,arr[26]={0};
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			arr[str[i]-97]++;//c-97-->99-97->2
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			if(arr[str[i]-97]!=0)	
			{
				printf("%c",str[i]);//t
				arr[str[i]-97]=0;//imp point
				
			}
		}
	}
	
	
}


















