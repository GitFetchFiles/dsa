#include<stdio.h>
int index_sequential(int a[],int n,int key);
void main()
{
int a[30],key,n,i,result;


printf("\n Enter No. of element:");
scanf("%d",&n);
printf("\n Enter a list of elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("\n Enter element to b searched");
scanf("%d",&key);
result=index_sequential(a,n,key);
if(result==-1)
printf("\n Not found");
else

printf("\n Found at location =%d",result);
}

int index_sequential(int a[],int n,int key)
{
int keys[6],index[6],i,j,temp,n1,start;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
n1=0;
for(i=0;i<n;i=i+4)
{
keys[n1]=a[i];
index[n1]=i;
n1++;
}

if(key<keys[0])
return(-1);
for(i=0;i<n;i++)
if(key<keys[i])
break;
start=index[i-1];
for(i=start;i<start+4&&i<n;i++)
if(a[i]==key)
return (i);
return(-1);
}