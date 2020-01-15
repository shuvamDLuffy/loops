#include <stdio.h>

int main()
{
    int num,cube,i;
    printf("Enter a number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        cube=i*i*i;

        printf("The cube of %d is %d.\n",i,cube);
    }
    return 0;
}
