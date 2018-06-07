#include<stdio.h>
int main()
{

    int x1,x2;
    float temp1,temp2,result;
    double x3;
    scanf("%d %d %lf",&x1,&x2,&x3);
    temp1 = x2*x3;
    scanf("%d %d %lf",&x1,&x2,&x3);
    temp2=x2 * x3;
    result = temp1 + temp2;;
    printf("VALOR A PAGAR: R$ %.2lf\n",result);
    return 0;

}
