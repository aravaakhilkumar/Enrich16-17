#include<stdio.h>
void si(int p,int t,float rate);
main()
{
	int a,t;
	float rate;
	printf("enter the amount");
	scanf("%d",&a);
	printf("enter the time to which amount to be returned");
	scanf("%d",&t);
	printf("enter the rate of intrest");
	scanf("%f",&rate);
	si(a,t,rate);
 }
  void si(int p,int t,float rate)
 {
  float si=0;
  si=(p*t*rate)/100;
  printf("%f",si);
 }
