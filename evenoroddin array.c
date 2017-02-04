include<stdio.h>
void main()
{
int a[10],b[10],c[10],i,j,k,n;
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
        b[j]=a[i];
        j++;
    }
    else 
    {
        c[k]=a[i];
        k++;
    }
}
   for(i=0;i<j;i++)
   {
       printf("\t%d",b[i]);
   }
   printf("\n");
   for(i=0;i<k;i++)
   {
       printf("\t%d",c[i]);
   }
   
    
}
