#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100000];
		int i=0;
		scanf("%s",&s);
		int j=strlen(s);
		while(i<j)
		{
		char ch=s[i];
		printf("%c",s[i]);
		while(s[++i]==ch)
		{
		continue;
		}
	}
		printf("\n");
	}
	return 0;
}

