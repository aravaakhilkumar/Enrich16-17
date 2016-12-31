#include<stdio.h>
void main()
{
	int i,j,m,n,a[10][10];
 	printf("enter the no. of rows and columns... ");
 	scanf("\n%d\n%d",&m,&n);
	printf("\nenter the matrix");
 	for(i=0;i<m;i++)
 	{
  		for(j=0;j<n;j++)
   		{
     		scanf("%d",&a[i][j]);
   		}
 	}
    for(i=0;i<m;i++)
 	{
  		for(j=0;j<n;j++)
   		{
    
 			if(i==0||j==0||i==m-1||j==n-1)
			{
  				a[i][j]=1;
			}
 		}
	}
  	for(i=0;i<m;i++)
 	{
		printf("\n");
 		for(j=0;j<n;j++)
   		{
     		printf("%d \t",a[i][j]);
  	 	}
	}
}
 
