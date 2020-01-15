#include <stdio.h>

int main()
{
    int count =0;
    char star = '*';
    for(int i=1;i<4;i++)
    {

        printf("%c\n\n",star);
        count++;

        if(count>0){
        printf("%c",star);
        }

        if(count>1)
        {
            printf("%c",star);
        }

        if(count>2)
        printf("%c%c",star,star);
    }
    printf("\n");
    return 0;
}
