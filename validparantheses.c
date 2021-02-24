#include <stdio.h>
int main()
{
	char a[100];
	gets(a);
	int i,j;
	for(i=0;a[i]!='\0';i+=2)
	{
		if(a[i]=='('&&a[i+1]==')')
		{
				j=1;
			
		}
		else if(a[i]=='{'&&a[i+1]=='}')
		{
			j=1;
		}
		else if(a[i]=='['&&a[i+1]==']')
		{
			j=1;
		}
		else
		j=0;
	}
	if(j==1)
	printf("true");
	else
	printf("false");
}
