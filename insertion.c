#include<stdio.h>
void insertion(int a[], int n)
{
    int i,j,temp;
    for(i=1;i<=n-1;i++)
    {

        temp=a[i];
        for(j=i-1;j>=0&&a[j]>temp;j--)
        a[j+1]=a[j];
        a[j+1]=temp;
    }
}
 
int main()
{
    int i, n, a[10];
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
