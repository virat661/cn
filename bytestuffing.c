#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int i=0,j=0,n,pos;
	char a[20],b[50],ch; 
	printf("enter string\n");
	fgets(a,20,stdin);
	n=strlen(a);
	printf("enter position and char:\n");
	scanf("%d",&pos);
	//fflush(stdin);
	if(pos>n)
	{
		printf("invalid position, Enter again :");
		scanf("%d",&pos);
	}
	printf("enter the character\n");
	scanf("\n%c",&ch);
	b[0]='d';
	b[1]='l';
	b[2]='e';
	b[3]='s';
	b[4]='t';
	b[5]='x';
	j=6;
	while(i<n)
	{
		if(i==pos-1)
		{
			b[j]='d';
			b[j+1]='l';
			b[j+2]='e';
			b[j+3]=ch;
			b[j+4]='d';
			b[j+5]='l';
			b[j+6]='e';
			j=j+7;
		}
		/*if(a[i]=='d' && a[i+1]=='l' && a[i+2]=='e')
		{
			b[j]='d';
			b[j+1]='l';
			b[j+2]='e';
			j=j+3;
		}*/
		b[j]=a[i];
		i++;
		j++;
	}
	b[j]='d';
	b[j+1]='l';
	b[j+2]='e';
	b[j+3]='e';
	b[j+4]='t';
	b[j+5]='x';
	b[j+6]='\0';
	printf("\nframe after stuffing:\n");
	printf("%s",b);
}
