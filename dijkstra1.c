#include<stdio.h>
void main()
{
	int path[50][50],i,j,min,a[50][50],p,st=1,ed=5,stp,edp,t[50],index;
	printf("enter the cost matrix\n");
	for(i=1;i<=5;i++) for(j=1;j<=5;j++)
		scanf("%d",&a[i][j]);
		printf("enter the paths\n");
		scanf("%d",&p);
	printf("enter possible paths\n");
	for(i=1;i<=p;i++)
		for(j=1;j<=5;j++)
			scanf("%d",&path[i][j]);
	 
	for(i=1;i<=p;i++)
	{
		t[i]=0;
		stp=st;
		for(j=1;j<=5;j++)
		{
			edp=path[i][j+1];
			t[i]=t[i]+a[stp][edp];
			if(edp==ed)
				break;
			else
				stp=edp;
		}
	}
	min=t[st];
	index=st;
	for(i=1;i<=p;i++)
	{
		if(min>t[i])
		{
			min=t[i];
			index=i;
		}
	}
	printf("minimum cost %d",min);
	printf("\n minimum cost path ");
	for(i=1;i<=5;i++)
	{
		printf("--> %d",path[index][i]);
		if(path[index][i]==ed)
			break;
	}
}


/*enter the cost matrix
0 1 4 2 0
1 0 3 7 0
4 3 0 5 0
2 7 5 0 6
0 0 0 6 0
enter the paths
4
enter possible paths
1 2 3 4 5 
1 2 4 5 0
1 3 4 5 0
1 4 5 0 0
minimum cost 0
 minimum cost path 
 Index : 3 1 4*/
