#include<stdio.h>
int interpolation_search(int a[],int i,int j,int key);
void main()
{int a[30],key,mid,p,q,k,n,i,result,op;
            printf("\n Enter No. of Element: ");
             scanf("%d",&n);
             printf("\n Enter a sorted list of %d elements : ",n);
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            printf("\n Enter the element to searched : ");
            scanf("%d",&key);
            result=interpolation_search(a,0,n-1,key);
            if(result==-1)
            printf("\n Not found :");
            else
            printf("\n Found at location=%d",result);
            
}
int interpolation_search(int a[],int i,int j,int key){
 int c,mid;
 if(i>j)
 return (-1);
 if(j>i)
 c=(key-i)/(j-i);
 else
 c=0;
 mid=i;
 if(c>0)
 mid=i+(j-i)/c;
 if(key==a[mid])
 return(mid);
 if(key>a[mid])
 return(interpolation_search(a,mid+1,j,key));
 return(interpolation_search(a,i,mid-1,key));}