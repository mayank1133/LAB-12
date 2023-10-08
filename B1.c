#include<stdio.h>
void main()
{
    int a,i,n,sum=0;
    printf("Enter a number for required series:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(a=1;a<=i;a++)
        {
            sum=sum+a;
        }
    }
    printf("\nSum of the series is:%d",sum);

}