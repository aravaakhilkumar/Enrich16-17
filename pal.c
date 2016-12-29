#include<stdio.h>
void main()
{
    int n,rev=0,r,q;
    printf("\nenter the number");
    scanf("\n%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10);
        q=rev+r;
        n=n/10;
    }
    if(q==rev)
    {
        printf("\n The given number is palindrome");
    }
    else
    {
        printf("\nThe given number is not a palindrome");
    }
}
