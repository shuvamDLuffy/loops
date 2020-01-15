#include <stdio.h>
#include <math.h>
int main()
{
    int i,facto=1,input;
    printf("Input a number: ");
    scanf("%d",&input);

    for(i=input;i>=1;i--)
    {
        facto=facto*i;

    }
    printf("The factorial of %d is %d.\n",input,facto);

    return 0;
}
