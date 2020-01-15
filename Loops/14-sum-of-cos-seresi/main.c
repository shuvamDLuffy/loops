#include <stdio.h>
#include <math.h>

#define pi 3.1415
double cosine(double x)
{
    int i =1;
    double t0=1;
    double t1,sum=t0,R;

    do{
        R=-(x*x)/(2*i*(2*i-i));
        t1=R*t0;
        t0=t1;
        sum+=t1;
        i++;
       }while(fabs(t1/sum)>0.0000000000000000000000001);

      return sum;

}

main()
{
   double x;
    begin:
   printf("Enter angle in degree: ");
   scanf("%lf",&x);

    x = x *(pi/180);

    printf("%lf",cosine(x));
    printf("\n");
    goto begin;
}


