#include<stdio.h>
int main()
{
    double i;
    double result;

    scanf("%lf",&i);
    result =((4/3.0)*3.14159*(i*i*i));
    printf("VOLUME = %.3lf\n",result);
    return 0;
}
