
#include <stdio.h>
int main () 
{ 
int i,j,k=0,t,p,a[10],n;
printf ("enter the number");
scanf("%d",&n);
 while(n>0)
 {
    r=n%10;
    n=n/10;
    a[k]=p;
    k++;
 } 
 for(i=0;i<k;i++) 
 {
  for(j=i+1;j<k;j++)
  {
  if(a[i]>a[j]) 
  {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
  }
 } 
 for(i=0;i<k;i++) 
  {
  printf(" ",a[k]);
  } 
}return 0;
} 
