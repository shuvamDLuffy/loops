#include <stdio.h>

int main()
{
    int r,row,sp,n,p; //variable for rows  space and no of space and for pyrimid
    char star ='*';
    printf("Enter the no of rows: ");
    scanf("%d",&row);

    n=row;
    for(r=1;r<=row;r++)
    {
        for(sp=1;sp<=n;sp++)
        {
            printf(" ");
        }
        n--;

        for(p=1;p<=r;p++)
        {
            printf("%c ",star);
        }
          printf("\n");
    }
    printf("\n");
    return 0;
}
