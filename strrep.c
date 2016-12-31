#include<stdio.h>
#include<string.h>
void main()
{
        char str[100];
        int k,len;
        int a=0,e=0,i=0,o=0,u=0;
        printf("\nenter the string....");
        scanf("%s",&str);
       
        printf("\nlength:%d",len);
        for(k=0;str[k]!='\0';k++)
        {
                if(str[k]=='a'||str[k]=='A')
                 {
                        a++; 
                 }
                if(str[k]=='E'||str[k]=='e')
                 {
       e++;
       }
       if(str[k]=='i'||str[k]=='I')
       {
        i++;
       } 
        if(str[k]=='o'||str[k]=='O')
        {
         o++;
        }
         if(str[k]=='u'||str[k]=='U')
         {
           u++;
         }
     }
   printf("\nthe no. of a values are...%d ",a);
   printf("\nthe no. of e values are...%d ",e);  
   printf("\nthe no. of i values are...%d ",i);
   printf("\nthe no. of o values are...%d ",o);
   printf("\nthe no. of u values are...%d ",u);
}

