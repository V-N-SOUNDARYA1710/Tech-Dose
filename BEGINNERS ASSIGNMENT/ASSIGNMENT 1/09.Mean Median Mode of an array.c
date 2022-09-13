#include<stdio.h>
double arr[100];
int n;
int findmean(void)
{
double sum=0,mean;
int j;
for(j=0;j<n;j++)
{
sum+=arr[j];
}
mean=sum/n;
printf("nMean=%lfn",mean);
}
void range(void)
{
double max;
max=arr[n-1];
double min;
min=arr[0];
double res;
res=max-min;
printf("nRange=%lfn",res);
}
void median(void)
{
double res;
double a,b;
a=arr[n/2];
b=arr[n/2-1];
if(n%2==0)
{
res=(a+b)/2;
}
else
res=arr[n/2];
printf("nThe Median is %lfn",res);
}
int mode(int n)
{
int cnt=0,i,pos;
double mode;
int m;
for(i=0;i<n;i++)
{
if(arr[i]==arr[i+1])
{
mode=arr[i];
pos=i;
cnt++;
}
}
m=n-i;
while(m!=0)
{
mode(m);
}
printf("Moden%lf",mode);
return m;
}
main()
{
printf("Enter the Number of Entriesn");
scanf("%d",&n);
findmean();
median();
mode(n);
}
