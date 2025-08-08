#include <stdio.h>

int main()
{
    double s;
    scanf("%lf", &s);

    double r=s/2;
    double area= (s*s) - (3.1416*r*r);
    if(area!=0){
    printf("%.2lf\n", area);}
    else {printf("BAD LUCK\n");}

    return 0;
}

