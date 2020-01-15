#include <stdio.h>
#include <math.h>
int main()
{
    int num,i;
    float sum=0;

    printf("Enter length of the series: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum=sum+(float)1/i;

        if(i==1) printf("1 +");

        else if(i==num) printf("1/%d= ",i);

        else printf("1/%d + ",i);

    }
    printf("%f",sum);
    printf("\n");

    return 0;
}
