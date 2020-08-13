#include<stdio.h>
int prime(int);
int main()
{
    int n,c;
    scanf("%d",&n);
    c=prime(n);
    if(c==1)
        printf("True");
        /*check prime*/
    else
        printf("false");
    return 0;
}
int prime(int a)
{
    int i;
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
           return 0;
        }
    }
    return 1;
}
