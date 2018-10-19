#include<stdio.h>
int main()
{
  int a,b;
  printf("\nEnter the value of variables :");
  scanf("%d%d",&a,&b);

  printf("\nValues before swapping :a=%d\n%b=d",a,b);
  a = a+b;
  b = a-b;
  a = a-b;

  printf("\nValues after swapping :a=%d\nb=%d",a,b);
  printf("\n");

  return 0;
  }
