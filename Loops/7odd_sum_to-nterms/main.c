#include <stdio.h>

int main()
{
    int num,i,sum=0,let=1;
    printf("Enter any number: ");
    scanf("%d",&num);

    printf("Odd numbers of %d terms are:\n ",num);
    printf("%d",let);
     for(i=1;i<=num;i++)
     {

         let=let+2;
         printf("%3.1d",let);
     }
    printf("\n");
    return 0;
}
