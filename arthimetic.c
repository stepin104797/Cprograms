#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int main()
{
int m,n,ch,c;
int(*p[2])(int,int);
p[0]=add;
p[1]=sub;
m=25;
n=20;
scanf("%d",&ch);
c=p[ch](m,n);
printf("%d",c);
return 0;
}
int add(int x,int y)
{
 return x+y;
}
int sub(int x,int y)
{
 return x-y;
}

