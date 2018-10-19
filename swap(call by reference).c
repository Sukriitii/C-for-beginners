#include<stdio.h>
void swap(int*,int*);
int main()
{
   int a,b;
   printf("\n\nEnter the values of a & b :");
   scanf("%d%d",&a,&b);

   printf("\n\nValues before swapping : a=%d,b=%d",a,b);
   swap(&a,&b);

   printf("\n\nValues after swapping : a=%d,b=%d",a,b);
   printf("\n\n\n\n");
   return 0;
   }

     void swap(int*x,int*y)
     {
        int t;
        t = *x;
        *x = *y;
        *y = t;
        }
