#include<stdio.h>
int sort(int n,int* p)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(*(p+j)<*(p+i))
{
temp=*(p+i);
*(p+i)=*(p+j);
*(p+j)=temp;
}
}
}
for(i=0;i<n;i++)
printf("%d ",*(p+i));
}
int main()
{
int n=6;
int arr[]={2,1,4,5,3,6};
sort(n, arr);
return 0;
}
