#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the how many natural number you want to display:-\n");
    scanf("%d",&n);

    printf("Natural numbers upto n terms:");
    for(i=1;i<=n;i++)
    {
        printf("%3.1d\t",i);
    }
    printf("\nThe sum upto n terms is: ");
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }

    printf("the sum is: %d\n",sum);
    return 0;
}
