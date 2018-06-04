#include<stdio.h>
int main()
{
    char ch;
    double sellers_salary,sold_value,result;

    scanf("%s %lf %lf",&ch,&sellers_salary,&sold_value);
    result = (sellers_salary +((15.00/100.00)*sold_value));
    printf("TOTAL = R$ %.2lf\n",result);
    return 0;

}
