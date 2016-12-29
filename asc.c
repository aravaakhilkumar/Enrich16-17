
#include <stdio.h>
int main () 
{ 
int i,j,t,p,a[10];
Int k=0,a[10];
printf ("\nenter the number");
scanf("\n%d",&n);
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
  printf("\nThe number after arranging in ascending order is ",a[k]);
  } 
}return 0;
} 
