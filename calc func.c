#include<stdio.h>
void calc(char,int,int);
int main()
{
  int a, b;
  char c;
  printf("\n\nEnter the operator : ");
  scanf("%c",&c);
  printf("\n\nEnter the value of a & b :");
  scanf("%d%d",&a,&b);

  switch(c)
  {
     case '+' : printf("\n Value is : %d",a+b);
                break;
     case '-' : printf("\nValue is : %d",a=b);
                break;
     case '*' : printf("\n Value is : %d",a*b);
                break;
     case '/' : printf("\nValue is : %d",a/b);
                break;
     default  : printf("\n\nWrong choice.");
  }
    printf("\n\n\n\n");
    return 0;
}
 void calc(char c, int a, int b)
 {
    int x ;
    x = a+b;

    x = a-b;

    x = a*b;

    x = a/b;

}
