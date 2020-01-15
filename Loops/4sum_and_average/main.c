#include <stdio.h>

int main()
{
    int i,sum=0,num;
    float avarage;
    printf("Enter any 10 numbers:-\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    avarage=sum/2;
    printf("\nThe sum of the 10 numbers given by user is %d.\n",sum);
    printf("The avarage of given 10 numbers is %f\n",avarage);

    return 0;
}
