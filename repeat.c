#include<stdio.h>
void main()
{
 int a[20],i,b,c=0,n;
 printf("\nenter the no. of  elements in an array:");
 scanf("%d",&n);
 printf("the number to be searched:");
 scanf("%d",&b);
printf("enter the elements in an array ");

 for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
 if(a[i]==b)
 {
  c++;
 }
}
 printf("the number %d repeated %d times",b,c);
}
