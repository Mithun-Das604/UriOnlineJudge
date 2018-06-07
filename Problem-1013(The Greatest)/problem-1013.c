#include<stdio.h>
int main()
{
    int num1,num2,num3,compare_first_two,compare_result_and_num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    compare_first_two=(num1 + num2+abs(num1-num2))/2;
    compare_result_and_num3=(compare_first_two+num3+abs(compare_first_two-num3))/2;
    printf("%d eh o maior\n",compare_result_and_num3);
    return 0;
}

