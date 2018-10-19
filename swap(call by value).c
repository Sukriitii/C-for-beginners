#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("\nEnter the value of a & b :");
    scanf("%d%d",&a,&b);

    printf("\nValues before swapping : a=%d,b=%d",a,b);
    swap(a,b);


    return 0;
    }

     void swap(int x,int y)
     {
       int c;
       printf("\n\n Values before swapping: x=%d,y=%d",x,y);
       c = x;
       x = y;
       y = c;
       printf("\n\nValues after swapping :x=%d,y=%d",x,y);
       printf("\n\n\n\n");
       }
