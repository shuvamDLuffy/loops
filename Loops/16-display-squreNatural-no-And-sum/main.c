#include <stdio.h>

int main()
{
    int i,num,ans=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        ans=i*i;
        printf("%d ",ans);
        sum+=ans;
    }
     printf("\n");
    printf("The sum of square natural numbers %d.",sum);
    printf("\n");
    return 0;
}
