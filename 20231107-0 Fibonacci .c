#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,c=0,i=0;
clrscr();
printf ("enter the number of elements in fibinocci\n");
scanf("%d",&n);
printf("the fibinocci series is!");
printf("%d \t %d",a,b);
 for(i=3;i<=n;i++)
 {
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
   }
getch();
}