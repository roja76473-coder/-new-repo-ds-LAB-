#include <stdio.h>
int main()
{
int a[]={1,2,3,4,4,6,7};
int n=7;
int maxcount=0,mostrepeated;
for(int i=0;i<n;i++)
{
int count =0;
for(int j=0;j<n;j++)
{
if(a[i]==a[j])
{
count ++;
}
}
if(count>maxcount)
{
maxcount=count;
mostrepeated=a[i];
}
printf("mostrepeated numbers = %d",mostrepeated);
return 0;
}
}
