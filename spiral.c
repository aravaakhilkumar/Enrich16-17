#include <stdio.h>
 main()
{
 int i,j,n,a[10][10],b=1;
 printf("enter the no. of rows and columns");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
	  for(j=1;j<=n;j++)
		{
		   if(i%2==1)
          	{ 
	           a[i][j]=b;
                     b++;
		}
                 else
                    {
                      a[i][n-j+1]=b;
                        b++;
                     }}}
 for(i=1;i<=n;i++)
  {
	  for(j=1;j<=n;j++)
		{
                  printf("%d\t",a[i][j]);
		}
 printf("\n");
}
}
