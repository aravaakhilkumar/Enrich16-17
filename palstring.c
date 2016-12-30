#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,l;

	printf("Enter the string...");
	scanf("%s",str);
	l=strlen(str);
        for(i=0,j=l-1;i<j;i++,j--)
	{
		if(str[i]==str[j])
		{
			continue;
		}
		else
		{
			break;
		}
	}
       if(i>=j)
	{
		printf("%s The given string is a Palindrome",str);
	}
	else
	{
		printf("%s The given string is not a Palindrome",str);
	}
	return 0;
}
