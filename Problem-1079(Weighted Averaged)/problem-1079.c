#include<stdio.h>
int main()
{
    int n,i;
    double first,second,third,result;
    scanf("%d",&n);
    for( i = 1; i <= n; i++){
        scanf("%lf %lf %lf",&first,&second,&third);
        result = (first * 2 + second * 3 + third * 5)/10;
        printf("%.1lf\n",result);


    }
    return 0;
}
