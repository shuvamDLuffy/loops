#include <stdio.h>

int main()
{
    int num,i,product;
    printf("Entera number: ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
       product = num * i;
       printf(" %d * %d = %d.\n",num,i,product);
    }
    return 0;
}
