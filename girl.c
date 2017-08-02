#include<stdio.h>
#include<conio.h>
void pow(int,int);
void main()
{
int a,b,c;
clrscr();
scanf("%d%d",&a,&b);
c=pow(a,b);
printf("%d",c);
}
void pow(int x,int y)
{
int i,z=1;
for(i=1;i<=y;i++)
z=x*z;
}
