#include<stdio.h>
#include<string.h>
int main() {
int tc,i,j,p;
printf("enter the number of test cases::");
scanf("%d",&tc);
for(i=0;i<tc;i++)
{
char str[100];
int count=0,k=4;
printf("\nenter the name of website::");
scanf("%s",str);
j=strlen (str);
for(p=4;p<(j-4);p++)
{
	if(str[p]!='a'&&str[p]!='e'&&str[p]!='i'&&str[p]!='o'&&str[p]!='u')
	count++;
}
k=k+count;
printf("\n the required ratio is::%d/%d",k,j);
}
return 0;
}
