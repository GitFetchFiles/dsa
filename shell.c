#include<stdio.h>
void ShellSort(int a[], int n)
{
    int i, j, step, tmp;
    for(step = n/2; step > 0; step /= 2)
    {
        for(i = step; i < n; i++)
        {
            tmp = a[i];
            for(j = i; j >= step; j -= step)
            {
                if(tmp < a[j-step])
                    a[j] = a[j-step];
                else
                    break;
            }
            a[j] = tmp;
        }
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
    ShellSort(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
